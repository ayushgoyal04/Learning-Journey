class Employee:
    language = "Python"
    salary = 10000
    
    # def __init__(self):  # dunder method, which is automatically called
    #     print("I am creating an objecct")
    
    def __init__(self, name, salary, language):
        self.name = name
        self.salary = salary
        self.language = language
        print("I am creating an object")
    
    
    def getInfo(self):
        print(f"The language is {self.language} and the salary is {self.salary}")    

    @staticmethod
    def greet():
        print("Good Morning")
        
ayush = Employee("Harry", 99999, "Javascript")
# ayush.name = "Ayush"
print(ayush.name, ayush.salary, ayush.language)