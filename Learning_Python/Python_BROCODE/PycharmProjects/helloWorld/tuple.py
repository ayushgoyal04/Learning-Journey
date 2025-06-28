# tuple - collections which are ordered and unchangeable, immutable
#         used to group together related data

student = ("Bro",21,"male")

print(student.count("Bro"))
print(student.index("male"))

for x in student:
    print(x)

if "Bro" in student:
    print("Bro is here!! ")