n = int(input("Enter number: "))

i = 0
j = 0

while(i<n):
    j = 0
    while(j<=i):
        print("*", end="")
        j+=1
    print()
    i+=1