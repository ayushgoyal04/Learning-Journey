name= "Ayush Goyal"
# print(name)
# print(len(name))
# print(name.find("y"))
# print(name.capitalize()) #only 1st alphabet
# print(name.upper())
# print(name.lower())
# print(name.isdigit()) #bool value is returned
# print(name.isalpha()) #contains space
# print(name.count("g"))
# print(name.replace("u","a"))
# print(name * 3)

# slicing, reversing strings
# indexing[] or slice()
# [start:stop:step]

name = "Ayush Goyal"
first_name = name[0] # indexing only one letter
print(first_name)

first_name = name[0:5] # only prints Ay because the second number Or limit is excluded
print(first_name)

last_name= name[6:11] #name[6:]
print(last_name)
skipping_letters= name[0:11:2] # skips every two letter
print(skipping_letters)

# reversing strings
reversed_name = name[::-1]
print(reversed_name)

#using slicing

website1 = "http://google.com" # Aim - Remove everything other than the name
website2 = "http://wikipedia.com"
# counting from left - start from 0 and increase (0,1,...) counting from right - start from -1 and decrease (...,-2,-1)
slice = slice(7,-4)
print(website1[slice])
print(website2[slice])