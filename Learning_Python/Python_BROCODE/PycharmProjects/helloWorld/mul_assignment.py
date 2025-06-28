#multiple assignment
# name="ayush"
# age=19
# code=True

# name,age,code= "Ayush", 19, True
#
# print(name)
# print(age)
# print(code)
#
# ansh = kamla = kunal = divyansh = "ADK"
# print(kunal)

# logical operator
temp = int(input("What is the temp: "))

# if temp >= 0 and temp <=30:
#     print("It is a suitable temp")
#     print("You can go out")
# elif temp < 0 or temp > 30:
#     print("the temp is bad\nStay inside")

# not operator flips the condition from false to true and vice versa

if not(temp >= 0 and temp <=30):
    print("It is a suitable temp")
    print("You can go out")
elif not(temp < 0 or temp > 30):
    print("the temp is bad\nStay inside")
