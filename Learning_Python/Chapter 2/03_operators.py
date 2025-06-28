# Arithmetic operators
a = 25
b = 13
c = a + b
print(c)

# Assignment operattors
a = 4 - 2 
b = 6
b += 3 # increment the value of b by 3 and then assign it to b
b -= 3 # decrement the value of b by 3 and then assign it to b
b *= 3
b /= 3

# Comparision operators -> Always return a boolean value
z = 5<=5
y = 5<5
x = 25!=13
w = 25==13
print(w)

# Logical operators 
p = True or False
q = True and False
# Truth table of OR
print("True or True is ", True or True)
print("True or False is ", True or False)
print("False or True is ", False or True)
print("False or False is ", False or False)

# Truth table of AND
print("True and True is ", True and True)
print("True and False is ", True and False)
print("False and True is ", False and True)
print("False and False is ", False and False)

print(not(False))
print(not(True))