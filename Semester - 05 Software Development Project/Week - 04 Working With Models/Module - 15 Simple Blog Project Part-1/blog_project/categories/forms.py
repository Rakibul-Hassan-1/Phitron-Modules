from django import forms
from .models import Category

class CategoryForm(forms.ModelForm):
    class Meta:
        fields = '__all__'
        model = Category
