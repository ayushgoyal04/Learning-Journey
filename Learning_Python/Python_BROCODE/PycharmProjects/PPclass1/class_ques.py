# sum of two nos.
# no1 = int(input("Enter 1st no. : "))
# no2 = int(input("Enter 2nd no. : "))
# print("The sum is :",no1+no2)

# Add digits of a number
# number = input("Enter number : ")
# length = len(number)
# sum = 0
# for i in range(length):
#     no = number[i]
#     i = i + 1
#     sum += int(no)
# print("The sum is :",sum)

# lists
subjects = ["maths","python","os","cao","ds",0,1,2,3,4]
print(subjects[0])
subjects.append("kunal")
print(subjects)
subjects.clear()

# dictionary
dictionary = {
    "USA": "Washington",
    "India": "Delhi",
    "Russia": "Moscow",
    "China": "Beijing"
}
print(dictionary["USA"])
for i in dictionary:
    print(dictionary[i])
dictionary.clear()
