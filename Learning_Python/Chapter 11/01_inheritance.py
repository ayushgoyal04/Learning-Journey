class Employee:
    company = "GOOGLE"
    def show(self):
        print(f"The name is {self.name} and the salary is {self.salary}")
    
# class Programmer:
#     company = "Google cloud"
#     def show(self):
#         print(f"The name is {self.name} and the salary is {self.salary}")
        
#     def showLanguage(self):
#         print(f"The name is {self.name} and The language is {self.language}")

class Programmer(Employee):
    company = "Youtube"
    def showLanguage(self):
        print(f"The name is {self.name} and The language is {self.language}")


a = Employee()
b = Programmer()

print(a.company, b.company)
