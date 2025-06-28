# *args = parameter that will pack all arguments in a yuple
# useful so that a function can accept a varying amount of positional argumants
# def add(*stuff):
#     sum = 0
#     stuff = list(stuff)
#     stuff[0]=0
#     for i in stuff:
#         sum += i
#     return sum
# print(add(1,2,3,4,5,6))

# **kwargs = parameter that will pack all arguments into a dictionary
# useful so that a functionn can accept a varying amount of keyword argument

def hello(**kwargs):
    print("Hello "+kwargs['first']+" "+ kwargs['last'])
    print("Hello",end=" ")
    for key, value in kwargs.items():
        print(value,end=" ")
hello(first="Bro", middle="dude", last ="code")