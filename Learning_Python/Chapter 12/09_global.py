a = 89

def fun(): 
    global a # this will change the value of a in the global scope (outside the function)
    a = 3
    print(a)


fun()
print(a)