from django.shortcuts import render,redirect
from django.views.generic import FormView
from .forms import UserRegistrationForm,UserUpdateForm
from django.contrib.auth import login,logout
from django.urls import reverse_lazy
from django.contrib.auth.views import LoginView
from django.contrib.auth.views import LogoutView,PasswordChangeView
from django.views import View
from django.contrib.auth.mixins import LoginRequiredMixin
from django.contrib import messages
from django.core.mail import EmailMessage, EmailMultiAlternatives
from django.template.loader import render_to_string

# Create your views here.

def send_transaction_email(user,subject,template):
   
    message = render_to_string(template,{
           'user': user,
         
        })
  
    send_email = EmailMultiAlternatives(subject,'',to=[user.email])
    send_email.attach_alternative(message,"text/html")
    send_email.send()











class UserRegistrationView(FormView):
    template_name='accounts/user_registration.html'
    form_class =  UserRegistrationForm
    success_url=reverse_lazy('profile') 

    def form_valid(self,form):
        print(form.cleaned_data)
        user=form.save() #save method call
        
        login(self.request,user) 
        print(user)
        return super().form_valid(form) #form_valid function call hobe zodi sob thik thake


class UserLoginView(LoginView):
    template_name =  'accounts/user_login.html'
    def get_success_url(self):
        return reverse_lazy('homepage')

# class UserLogoutView(LogoutView):
#     def get_success_url(self):
#         if self.request.user.is_authenticated:
#             logout(self.request)
#         return reverse_lazy('homepage')

def user_logout(request):
    if request.user.is_authenticated:
            logout(request)
    return redirect('homepage')        

class UserBankAccountUpdateView(View):
    template_name="accounts/profile.html"

    def get(self, request):
        form=UserUpdateForm(instance=request.user)
        return render(request, self.template_name, {'form': form})

        #This pattern is common when you want to display a form to the user, often for updating or providing information. The get method is where you typically perform actions related to retrieving data or preparing the context for rendering the template. 

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user)
        if form.is_valid():
            form.save()
            return redirect('profile')  # Redirect to the user's profile page
        return render(request, self.template_name, {'form': form})    


class UserPasswordUpdate(LoginRequiredMixin,PasswordChangeView):
    template_name='accounts/pass_change.html'
    success_url=reverse_lazy('profile')

    def form_valid(self,form):
        messages.success(self.request,f"Password Change Successfully")
        send_transaction_email(self.request.user,"Password Change", "accounts/pass_email.html")
        return super().form_valid(form)