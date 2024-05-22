from django.db import models
from categories.models import Category
from author.models import Author
# Create your models here.
class Post(models.Model):
    title = models.CharField(max_length=100)
    content = models.TextField()
    category = models.ManyToManyField(Category) # ekta post multiple category er moddhe thakte pare
    author = models.ForeignKey(Author, on_delete=models.CASCADE) # author k delete kore dile, tar sob data delete hoye jabe, like facebook id delete kore dile tar sob post auto delete hoye jabe.

    def __str__(self) -> str:
        return f'Title: {self.title}'