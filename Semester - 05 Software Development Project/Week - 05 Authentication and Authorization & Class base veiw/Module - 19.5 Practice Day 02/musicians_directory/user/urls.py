from django.urls import path,include
from . import views

urlpatterns = [
  
    path('register/',views.UserSignupView.as_view(),name="register"),
    path('login/',views.UserLoginView.as_view(),name="login"),
    path('profile/',views. ProfileView.as_view(),name="profile"),
    # path('logout/',views.UserLogoutView.as_view(),name="logout"),
    path('logout/',views.user_logout,name="logout"),
    path('edit_profile/',views.EditProfileView.as_view(),name="edit_profile"),
    path('edit_pass/',views.EditPasswordView.as_view(),name="edit_pass"),

]