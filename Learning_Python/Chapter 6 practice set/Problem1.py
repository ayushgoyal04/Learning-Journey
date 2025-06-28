a1 = int(input("Enter number:"))
a2 = int(input("Enter number:"))
a3 = int(input("Enter number:"))
a4 = int(input("Enter number:"))

if (a1>a2 and a1>a3 and a1>a4):
    print(f"{a1} is greatest")

elif (a2>a1 and a2>a3 and a2>a4):
    print(f"{a2} is greatest")    

elif (a3>a1 and a3>a2 and a3>a4):
    print(f"{a3} is greatest")

else:
    print(f"{a4} is greatest")