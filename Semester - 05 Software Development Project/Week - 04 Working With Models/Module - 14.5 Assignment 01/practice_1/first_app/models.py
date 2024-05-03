from django.db import models

# Create your models here.
class StudentModel(models.Model):
    roll = models.IntegerField(primary_key=True)
    name = models.CharField(max_length=20)
    date_of_birth = models.DateField()
    fathers_name = models.CharField(default='Jahangir Alam', max_length=20)
    address = models.TextField()
    
    
    def __str__(self) -> str:
        return f'Name: {self.name} Roll: {self.roll} '

