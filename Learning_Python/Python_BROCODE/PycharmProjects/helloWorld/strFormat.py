# str.format()= optional method that  gives users more control when displaying outputs

animal = "cow"
item = "moon"

print("The "+animal+" jumped over the "+item)
print("The {} jumped over the {}".format("cow","moon"))
print("The {} jumped over the {}".format(animal,item))
print("The {1} jumped over the {0}".format(animal,item)) # positional argument
print("The {animal} jumped over the {animal}".format(animal="cow",item="moon")) #  keyword argument

text = "The {} jumped over the {}"
print(text.format(animal,item))

# padding
name= "Ayush"
print("Hello, my name is {}. Nice to meet you".format(name))
print("Hello, my name is {:10}. Nice to meet you".format(name))
print("Hello, my name is {:<10}. Nice to meet you".format(name))
print("Hello, my name is {:>10}. Nice to meet you".format(name))
print("Hello, my name is {:^10}. Nice to meet you".format(name))

# formatting using numbers
number= 1000
print("The number pi is {:.2f}".format(number)) # f is floating point
print("The number is {:,}".format(number)) # adding comma
print("The number is {:b}".format(number)) # binary form
print("The number is {:o}".format(number)) # octal form
print("The number is {:X}".format(number)) # hex form
print("The number is {:E}".format(number)) # scientific form
