from django.shortcuts import render,redirect
from .import forms
from  .import models

# Create your views here.

def Add_Album(request):
    if request.method=="POST":
        fm= forms.AlbumForm(request.POST)
        if fm.is_valid():
            fm.save()
            return redirect('add_album')
    else:
         fm= forms.AlbumForm()
    return render(request,'album.html',{'form':fm})     


def Edit_Album(request,id):
    album=models.Album.objects.get(pk=id)
    # album =Album.objects.filter(pk=id).first()
    fm= forms.AlbumForm(instance=album)
    # print(album)
    # print(fm)

    if request.method=="POST":
        fm= forms.AlbumForm(request.POST,instance=album)
        if fm.is_valid():
            fm.save()
            return redirect('homepage')
   
    return render(request,'album.html',{'form':fm})     


def Delete_Album(request,id):
    album=models.Album.objects.get(pk=id)
    album.delete()
    return redirect('homepage')
