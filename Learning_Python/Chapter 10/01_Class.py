# In this example, every employee will have the name as Ayush, language as Python and salary as 10000, which is not the case in real life.
# class Employee:
#     name = "Ayush"
#     languaage = "Python"
#     salary = 10000
    
    
class Employee:
    language = "Python"
    salary = 10000
        
ayush = Employee()
print(ayush.language, ayush.salary)

kunal = Employee()
kunal.name = "Kunal Pusdekar"
print(kunal.name, kunal.language, kunal.salary)

# Here name is object/ Instance attribute.
# salary and languagee are class attributes as they derictly belong to a class.
