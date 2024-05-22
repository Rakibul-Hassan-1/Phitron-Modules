from django.shortcuts import render, redirect
from . import forms
# Create your views here.

def add_category(request):
    if request.method == 'POST':
        add_forms =  forms.CategoryForm(request.POST)
        if add_forms.is_valid():
            add_forms.save()
            return redirect('add_category')
    else:
        add_forms =  forms.CategoryForm()
    return render(request, 'add_category.html', {'form': add_forms}) 

