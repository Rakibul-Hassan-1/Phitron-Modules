from django import forms

from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm,UserChangeForm

class RegistrationForm(UserCreationForm):
    first_name=forms.CharField(label='First Name', widget=forms.TextInput(attrs={'id':'required'}))
    last_name=forms.CharField(label="Last Name", widget=forms.TextInput(attrs={'id':'required'}))
    email=forms.EmailField(label="Email", widget=forms.EmailInput(attrs={'id':'required'}))
    class Meta:
        model=User
        fields=['username','first_name','last_name','email']


class ChangeUserForm(UserChangeForm):
    password=None
    first_name=forms.CharField(label='First Name', widget=forms.TextInput(attrs={'id':'required'}))
    last_name=forms.CharField(label="Last Name", widget=forms.TextInput(attrs={'id':'required'}))
    email=forms.EmailField(label="Email", widget=forms.EmailInput(attrs={'id':'required'}))
    class Meta:
        model=User
        fields=['username','first_name','last_name','email']


