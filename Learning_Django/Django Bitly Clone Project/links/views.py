from django.shortcuts import render, get_object_or_404, redirect
from django.urls import reverse
from .models import Link
from .forms import LinkForm

# Create your views here.
def index(request):
    links = Link.objects.all()
    context = {
        "links": links
    }
    return render(request, 'links/index.html', context)

def original_link(request, link_id):
    link = get_object_or_404(Link, id=link_id)
    link.click()  # Increment the click count
    return redirect(link.url)  # Redirect to the original URL


def root_link(request, link_slug):
    link = get_object_or_404(Link, slug=link_slug)
    link.click()
    return redirect(link.url)

def add_link(request):
    if request.method == 'POST':
        # form has data for us
        form = LinkForm(request.POST)
        if form.is_valid():
            # save tha data and return to the home page
            form.save()
            return redirect(reverse('home'))
    else:
        form = LinkForm()
    context = {
        "form": form
    }
    return render(request, 'links/create.html', context)
