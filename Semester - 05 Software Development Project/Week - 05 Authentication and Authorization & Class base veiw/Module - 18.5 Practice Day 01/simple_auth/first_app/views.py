from django.shortcuts import render,redirect

from . import forms
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm
from django.contrib.auth import authenticate,login,logout,update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required

# Create your views here.


def Register(request):
    if request.method=='POST':
        register_form=forms.RegistrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request,'Account Created Successfully')
            return redirect('register')
    else:
        register_form=forms.RegistrationForm()
    return render(request,'register.html',{'form':register_form ,'type':'Registration'})   


def user_login(request):
    if request.method=='POST':
        login_form=AuthenticationForm(request=request, data=request.POST)
        if login_form.is_valid():
            user_name=login_form.cleaned_data['username']
            user_pass=login_form.cleaned_data['password']
            user=authenticate(username=user_name,password=user_pass)
            if user is not None:
                messages.success(request,'Log In Successfully')
                login(request,user)
                return redirect('homepage')
    else:
        login_form=AuthenticationForm()
    return render(request,'register.html',{'form':login_form,'type':'Log In' })   

  
@login_required
def edit_profile(request):
    if request.method=='POST':
        profile_form=forms.ChangeUserForm(request.POST,instance=request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(request,'profile Updated Successfully')
            return redirect('edit_profile')
    else:
        profile_form=forms.ChangeUserForm(instance= request.user)
    return render(request,'profile.html',{'form':profile_form })   


@login_required
def pass_change(request):
    if request.method=='POST':
        form=PasswordChangeForm(request.user,data=request.POST)
        if form.is_valid():

            form.save()
            messages.success(request,' Successfully changed Your Password')
            update_session_auth_hash(request,form.user)
            return redirect('edit_profile')
    else:
        form=PasswordChangeForm(user=request.user)
    return render(request,'register.html',{'form':form ,'type':'Password Change'})   


  

@login_required
def pass_change2(request):
    if request.method=='POST':
        form=SetPasswordForm(request.user,data=request.POST)
        if form.is_valid():

            form.save()
            messages.success(request,' Successfully changed Your Password')
            update_session_auth_hash(request,form.user)
            return redirect('edit_profile')
    else:
        form=SetPasswordForm(user=request.user)
    return render(request,'register.html',{'form':form ,'type':'Password Change'})   


def user_logout(request):
    logout(request)
    messages.success(request,'Logged Out Successfully')
    return redirect('homepage')    





