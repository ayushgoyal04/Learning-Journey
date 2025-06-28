m1 = int(input("Enter marks of student in subject 1: "))
m2 = int(input("Enter marks of student in subject 2: "))
m3 = int(input("Enter marks of student in subject 3: "))

if(m1<33 or m2<33 or m3<33):
    print("Fail")

elif(m1+m2+m3)/3 < 40:
    print("Fail")   
    
else: print("Pass")