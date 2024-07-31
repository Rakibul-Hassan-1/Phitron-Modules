from django.shortcuts import render,redirect
from . import forms
from .import models
from django.contrib import messages
from django.urls import reverse_lazy
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator 
from django.views.generic import CreateView,DeleteView,UpdateView

# Create your views here.

# def Add_musician(request):
#     if request.method=="POST":
#         fm=forms.MusicianForm(request.POST)
#         if fm.is_valid():
#             fm.save()
#             return redirect('add_musician')
#     else:
#         fm=forms.MusicianForm()

    
#     return render(request,'musician.html',{'form':fm})


# class based
@method_decorator(login_required,name='dispatch')
class AddMusicianView(CreateView):
    template_name='musician.html'
    form_class= forms.MusicianForm
    model= models.Musician
    success_url=reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, "successfully Add Musician")
        return super().form_valid(form)

    def get_context_data(self, **kwargs):
        context=super().get_context_data(**kwargs)
        context['type'] ="Add Musician"
        return context








def Edit_Musician(request,id):
     musician=models.Musician.objects.get(pk=id)
     fm=forms.MusicianForm(instance=musician)
     if request.method=="POST":
        fm=forms.MusicianForm(request.POST,instance=musician)
        if fm.is_valid():
            fm.save()
            return redirect('homepage')
    #  else:
    #     fm=forms.MusicianForm()

    
     return render(request,'musician.html',{'form':fm})



@method_decorator(login_required,name='dispatch')
class EditMusicianView(UpdateView):
    template_name='musician.html'
    form_class= forms.MusicianForm
    model= models.Musician
    success_url=reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, " Musician Profile Updated Successfully")
        return super().form_valid(form)

    def get_context_data(self, **kwargs):
        context=super().get_context_data(**kwargs)
        context['type'] ="Edit Musician"
        return context
   

class DeleteMusicianView(DeleteView):
        model= models.Musician
        template_name='delete_musician.html'
        success_url=reverse_lazy('profile')

 