class Employee:
    language = "Python"
    salary = 10000
    
    def getInfo(self):
        print(f"The language is {self.language} and the salary is {self.salary}")    
        
    # def greet(self):         # even tho this method does not need any argument, it still takes self as an argument.
    #     print("Good Morning")
        
# if we do not wish to pass object as an argument to a method,
# then we will have to create a static method,
# which is done by writing @staticmethod before the method.

    @staticmethod
    def greet():
        print("Good Morning")


ayush = Employee()
print(ayush.language, ayush.salary)

ayush.getInfo() # Same as Employee.getInfo(ayush)
ayush.greet()