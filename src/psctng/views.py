# from django.contrib.auth import authenticate, login, get_user_model
# from django.contrib.auth.models import User

from django.http import HttpResponse
from django.shortcuts import render, redirect


def home_page(request):
    return render(request, "home_page.html", {})


def vis(request):
    return render(request, "visual.html", {})


def toh(request):
    return render(request, "tohgame.html", {})

