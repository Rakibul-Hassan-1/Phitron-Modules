from django.shortcuts import render, redirect
from . import forms
# Create your views here.
def add_author(request):
    if request.method == 'POST':
        add_forms = forms.AuthorForm(request.POST)
        if add_forms.is_valid():
            add_forms.save()
            return redirect('add_author') 
    else: 
        add_forms = forms.AuthorForm()
    return render(request, 'add_author.html', {'form': add_forms})