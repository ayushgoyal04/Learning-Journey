num = int(input("Enter a number: "))

temp = 0
for i in range (2,num):
    if(num%i==0):
        temp = 1
        break
    
if(temp == 1):
    print("Not Prime")
else:
    print("Prime")
    