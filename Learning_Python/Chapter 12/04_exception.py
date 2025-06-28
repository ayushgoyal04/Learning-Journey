try:
    a = int(input("Hey, Enter a number: "))
    b = int(input("Hey, Enter a number: "))
    print(a/b)

except ValueError as v:
    print("Heyyyy")
    print(v)
    
except ZeroDivisionError as z:
    print("Bhaai zero se devide mat kar")
    print(z)
    
except Exception as e:
    print(e) 

print("Thank You")
