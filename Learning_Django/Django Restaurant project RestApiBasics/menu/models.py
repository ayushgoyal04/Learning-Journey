from django.db import models

# Create your models here.
# menu items
class Item(models.Model):
    name = models.CharField(max_length=100)
    price = models.IntegerField()
    description = models.TextField()

    def __str__(self):
        return f'{self.name} | {self.price}'
