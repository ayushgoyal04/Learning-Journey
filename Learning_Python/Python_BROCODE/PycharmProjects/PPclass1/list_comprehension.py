# a way to create new lists with less syntax

# example 1
squares = []
for i in range(1,11):
    squares.append(i * i)
print(squares)

squaress = [i * i for i in range(1,11)]
print(squaress)

# example 2
students = [100,90,80,70,60,50,40,30,0]
# {method1} passed_students = list(filter(lambda x: x >= 35, students))
# {method2} passed_students = [i for i in students if i >= 35]
# {method3} passed_students = [i if i >= 35 else "Failed" for i in students]

print(passed_students)

