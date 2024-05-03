from django.urls import path
from . import views
urlpatterns = [
    path('', views.home, name="homepage"),
    path('delete/<int:roll>', views.delete_data, name="delete_data"),
]