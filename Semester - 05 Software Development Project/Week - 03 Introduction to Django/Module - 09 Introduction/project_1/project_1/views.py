from django.http import HttpResponse

def home(valie):
    return HttpResponse("This is Home page bro...")
def contact(value):
    return HttpResponse("No request is fund!!!")