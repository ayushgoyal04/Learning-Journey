from django.db import models
'''
each class is a table in the database
each variable is a column in the table
each instance of a class is a row in the table
'''

# We will need two tables in thsi project
# profile table -> link table associated with the profile

class Profile(models.Model):
    BG_CHOICES = (
        ('blue', "Blue"),
        ('green', "Green"),
        ('yellow', "Yellow"),
        ('orange', "Orange"),
    )
    name = models.CharField(max_length=100)
    slug = models.SlugField(max_length=100, unique=True)
    bg_color = models.CharField(max_length=50, choices=BG_CHOICES, blank=True)

    def __str__(self):
        return self.name


class Link(models.Model):
    text = models.CharField(max_length=100)
    url = models.URLField()
    # many to one relationship
    profile = models.ForeignKey(Profile, on_delete=models.CASCADE, related_name="links")
    # description = models.TextField(blank=True)
    # image = models.ImageField(upload_to='images/', blank=True)

    def __str__(self):
        return self.text
