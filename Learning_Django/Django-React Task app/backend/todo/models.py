from django.db import models
# from rest_framework import serializers

# Create your models here.
class Todo(models.Model):
    title = models.CharField(max_length=100)
    description = models.CharField(max_length=500)
    completed = models.BooleanField(default = False)

    def __str__(self):
        return self.title
