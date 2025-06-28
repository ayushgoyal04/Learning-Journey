class Employee:
    language = "Python"
    salary = 10000
        
ayush = Employee()
ayush.language = "Java"
print(ayush.language, ayush.salary)

# instance attributes have higher priority than class attributes during assignmnt and retrival.