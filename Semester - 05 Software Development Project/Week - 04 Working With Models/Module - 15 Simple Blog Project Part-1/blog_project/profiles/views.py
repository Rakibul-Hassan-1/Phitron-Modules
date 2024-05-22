from django.shortcuts import render, redirect
from . import forms
# Create your views here.
def add_profile(request):
    if request.method == 'POST':
        add_forms = forms.ProfileForm(request.POST)
        if add_forms.is_valid():
            add_forms.save()
            return redirect('add_profile') 
    else: 
        add_forms = forms.ProfileForm()
    return render(request, 'add_profile.html', {'form': add_forms})