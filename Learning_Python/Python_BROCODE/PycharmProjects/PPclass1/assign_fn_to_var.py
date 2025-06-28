# higher order function below and lambda statements below

#def hello():
#    print("Hello")


#
# print(hello)
# hi = hello
# hello()
# hi()

# say = print
# say("what")


# Higher order functions

def loud(text):
    return text.upper()


def quiet(text):
    return text.lower()


def hello(func):
    text = func("Hello")
    print(text)


hello(loud)
hello(quiet)


def divisor(x):
    def dividend(y):
        return y / x

    return dividend


divide = divisor(2)
print(divide(10))

# lambda function

double = lambda x: x * 2
multiply = lambda x, y: x * y
add3 = lambda x, y, z: x+y+z
full_name = lambda x, y, z: x+" "+y+" "+z
print(double(5))
print(multiply(5,7))
print(add3(1,2,3))
print(full_name("Ayush", "Rajiv", "Goyal"))

age_check = lambda age: "above 18" if age >= 18 else "Below 18"
print(age_check(19))
