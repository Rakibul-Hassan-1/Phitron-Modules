from django import forms
from .models import Post

class PostForm(forms.ModelForm):
    class Meta:
        fields = '__all__'
        model = Post