a = int(input("Enter a number: "))
b = int(input("Enter second number: "))

if(b == 0):
    raise ZeroDivisionError("Jadugar hai kya!!! zero se divide mat kar.")

else:
    print(f"The division a/b is {a/b}")