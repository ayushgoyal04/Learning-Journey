print("Name: Ayush Goyal")
print("Practical: 1")
print("Roll No: 25")
print("Batch: A2")
print("Semester: 3")

# B] Write A Python Program to calculate Euclid distance Points A(x1.y1). B(x2,y2)

import math as np

print("Euclidean distance between two points:")
x1 = int(input("Enter coordinate of X1: "))
y1 = int(input("Enter coordinate of y1: "))
x2 = int(input("Enter coordinate of X2: "))
y2 = int(input("Enter coordinate of y2: "))
a = np.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
print("Distance:", a)
