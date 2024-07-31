from django.urls import path,include
from . import views

urlpatterns = [
   
    path('register/', views.Register,name="register"),
    path('login/', views.user_login,name="login"),
    path('edit_profile/', views.edit_profile,name="edit_profile"),
    path('pass_change/', views.pass_change,name="pass_change"),
    path('pass_change_2/', views.pass_change2,name="pass_change_2"),
    path('logout/', views.user_logout,name="logout"),
]