from django.urls import path,include
from . import views

urlpatterns = [
   
    path('add/',views.Add_Album , name="add_album"),
    path('edit/<int:id>',views.Edit_Album , name="edit_album"),
    path('delete/<int:id>',views.Delete_Album , name="delete_album"),
]