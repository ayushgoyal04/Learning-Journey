# sort() method- only with lists
# sort() function- other iterables also

# students = ("Ayush", "Ansh", "Kunal", "Piyush", "Kamala", "Divya")
#
# #students.sort(reverse=True)
# sorted_students = sorted(students, reverse=True)
#
# for i in sorted_students:
#     print(i)

# LISTS
students = [("Squidward", "F", 60),
            ("Sandy", "A", 33),
            ("Patrick","D", 36),
            ("Spongebob","B", 20),
            ("Mr.Krabs","C", 78)]

#grade = lambda grades: grades[1]
age = lambda ages:ages[2]
students.sort(key= age, reverse = True)

for i in students:
    print(i)

# Tuples
students = (("Squidward", "F", 60),
            ("Sandy", "A", 33),
            ("Patrick","D", 36),
            ("Spongebob","B", 20),
            ("Mr.Krabs","C", 78))

age = lambda ages:ages[2]
sorted_students = sorted(students, key = age)

for i in sorted_students:
    print(i)