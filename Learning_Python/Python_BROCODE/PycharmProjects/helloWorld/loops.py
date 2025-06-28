# if else basics
# age = int(input("how old are you: "))
#
# if age == 100:
#     print("You are a century old!!")
# elif age >= 18:
#     print("You are an adult")
# elif age < 0:
#     print("You are yet to be born")
# else:
#     print("you are a child")
#

import time
# for loop = a statement that will execute it's block of code.'
#            a limited number of time
# while loop = unlimited
# for loop = limited

# for i in range(10):
#     print(i+1)

# for i in range(50,100+1):
#     print(i)

# for i in range(50,100+1,2):
#     print(i)

# for i in "Ayush Goyal":
#     print(i)
#
# for seconds in range(10,0,-1):
#     print(seconds)
#     time.sleep(1)
# print("Happy new year!!")

# Nested for loops

rows = int(input("Enter rows : "))
columns = int(input("Enter columns : "))
symbol = input("Enter symbol : ")

for i in range (rows):
    for j in range (columns):
        print(symbol, end="")
    print()

# break, continue, pass

while True:
    name = input("Enter Name : ")
    if name != "":
        break

phone = "123-456-7890"
for i in phone:
    if i =="-":
        continue
    print(i, end="")

for i in range (1,21):
    if i == 13:
        pass
    else:
        print(i)

        # while loop- a statement that will execute a block of code,
        #        as long as it's condition remains true

        # name = ""
        # while len(name) == 0:
        #    name = input("Enter your name: ")
        #
        # print("Hello "+name)

        name = None

        while not name:
            name = input("Enter name: ")

        print("Hello " + name)