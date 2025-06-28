from django.shortcuts import get_object_or_404, render
from django.views.generic import ListView, CreateView, UpdateView, DeleteView
from django.urls import reverse_lazy

from .models import Profile, Link

# Create your views here.
class LinkListView(ListView):
    """
    Common pattern=> query for all the links =>
        links = Link.objects.all()
        context = {
            "links": links
        }
        return render(request, 'link_plant/link_list.html', context)
    """
    model = Link # contains all the functionality of the above code which we used to use in function based views
    # by defaut the template name is link_list.html


class LinkCreateView(CreateView):
    """
    If we were using function based views, we would have to do the following things=>
        1. create forms.py file and form
        2. check if this was a post or get prequest
        3. return an empty form or save the form data
    """
    model = Link
    # this view creates the form for us, we do not have to create forms.py file
    fields = "__all__" # this will create a form with all the fields of the model
    success_url = reverse_lazy('link-list') # after the form is submitted successfully, the user will be redirected to the home page


class LinkUpdateView(UpdateView):
    """
    If we were using function based views, we would have to do the following things=>
        1. create forms.py fine and form
        2. check if this was a get or a put prequest
        3. either render the form or updats and save in our database
    """
    model = Link
    # this view creates the form for us, we do not have to create forms.py file
    fields = ['text', 'url'] # this will create a form with only the fields mentioned in the list
    success_url = reverse_lazy('link-list')
    # Shares the same template as CreateView {FEATURE}
    # Template-> model_form.html=> link_form.html


class LinkDeleteView(DeleteView):
    """
    If we were using function based views, we would have to do the following things=>
        1. take in id/pk of the object
        2. query to the database to get the object
        3. check if it exitst-> delete the object
        4. redirect to the home page or some other url
    """
    model = Link
    success_url = reverse_lazy('link-list')
    # By default this will give us a form to confirm the deletion of the object
    # Template-> model_confirm_delete.html=> link_confirm_delete.html


# view for the profile
# function bassed view->
def profile_view(request, profile_slug):
    profile = get_object_or_404(Profile, slug=profile_slug)
    links = profile.links.all()
    context = {
        'profile': profile,
        'links': links
    }
    return render  (request, 'link_plant/profile.html', context)
