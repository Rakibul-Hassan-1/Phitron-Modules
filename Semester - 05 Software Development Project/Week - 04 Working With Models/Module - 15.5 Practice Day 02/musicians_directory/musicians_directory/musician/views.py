from django.shortcuts import render,redirect
from . import forms
from .import models

# Create your views here.

def Add_musician(request):
    if request.method=="POST":
        fm=forms.MusicianForm(request.POST)
        if fm.is_valid():
            fm.save()
            return redirect('add_musician')
    else:
        fm=forms.MusicianForm()

    
    return render(request,'musician.html',{'form':fm})


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




   
    