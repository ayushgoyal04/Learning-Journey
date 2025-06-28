from django.db import models

# Create your models here.
# model => python class
# model represents a table in the DataBase
# attributes are the fields in the table

# Table for job posting
class JobPosting(models.Model):
    # id -> starts at 1 and auto increments
    title = models.CharField(max_length=100)
    description = models.TextField()
    company = models.CharField(max_length=100)
    salary = models.IntegerField()
    is_active = models.BooleanField(default = False)

    # 0verriding dunder string method so that we can see more description of the app in the admin dashboard.
    def __str__(self):
        return f"{self.title} | {self.company} | Active: {self.is_active}"

# crud operations-> create, read, update, delete
# model manager -> objects
# JobPosting.objects.all()
# JobPosting.objects.get(id=1)
# JobPosting.objects.filter(company="Company_name")
