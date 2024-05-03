from django import forms
from first_app.models import StudentModel

class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        fields = '__all__'
        labels = {
            'name' : 'Student Name',
            'roll' : "Student Roll",
            'date_of_birth': "Student DOB",
        }
        widgets  = {
            'name' : forms.TextInput(),
            'date_of_birth': forms.NumberInput(attrs={'type': 'date'}),
        }
        help_texts = {
            'name' : "Write your full name"
        }
        
        error_messages = {
            'name' : {'required' : 'Your name is required'}
        }

