from django.urls import path,include
from . import views

urlpatterns = [
   
    path('add/',views.Add_musician , name="add_musician"),
     path('edit/<int:id>',views.Edit_Musician , name="edit_musician"),

]