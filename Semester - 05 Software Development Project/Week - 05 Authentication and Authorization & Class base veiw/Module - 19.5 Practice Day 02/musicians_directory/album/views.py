from django.shortcuts import render,redirect
from .import forms
from  .import models
from django.contrib import messages
from django.urls import reverse_lazy
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator 
from django.views.generic import CreateView,DeleteView,UpdateView
# Create your views here.

# def Add_Album(request):
#     if request.method=="POST":
#         fm= forms.AlbumForm(request.POST)
#         if fm.is_valid():
#             fm.save()
#             return redirect('add_album')
#     else:
#          fm= forms.AlbumForm()
#     return render(request,'album.html',{'form':fm})     




# class view for add_album
@method_decorator(login_required,name='dispatch')
class AddAlbumView(CreateView):
    template_name='album.html'
    form_class= forms.AlbumForm
    model= models.Album
    success_url=reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, "successfully Add Album")
        return super().form_valid(form)
    def get_context_data(self, **kwargs):
        context=super().get_context_data(**kwargs)
        context['type'] ="Add Album"
        return context






# def Edit_Album(request,id):
#     album=models.Album.objects.get(pk=id)
#     # album =Album.objects.filter(pk=id).first()
#     fm= forms.AlbumForm(instance=album)
#     # print(album)
#     # print(fm)

#     if request.method=="POST":
#         fm= forms.AlbumForm(request.POST,instance=album)
#         if fm.is_valid():
#             fm.save()
#             return redirect('homepage')
   
#     return render(request,'album.html',{'form':fm})     


# edit album

@method_decorator(login_required,name='dispatch')
class EditAlbumView(UpdateView):
    template_name='album.html'
    form_class= forms.AlbumForm
    model= models.Album
    
    success_url=reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, "successfully Add Album")
        return super().form_valid(form)

    def get_context_data(self, **kwargs):
        context=super().get_context_data(**kwargs)
        context['type'] ="Edit Album"
        return context




# def Delete_Album(request,id):
#     album=models.Album.objects.get(pk=id)
#     album.delete()
#     return redirect('homepage')

class DeleteAlbumView(DeleteView):
    template_name='delete.html'
    
    model= models.Album
    success_url=reverse_lazy('profile')
