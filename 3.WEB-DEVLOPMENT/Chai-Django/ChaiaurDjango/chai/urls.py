from django.urls import path
from .import views
urlpatterns = [
    path('', views.all_chai, name='all_chai'),
    path('oreder/', views.all_chai, name='all_chai'),
   ]