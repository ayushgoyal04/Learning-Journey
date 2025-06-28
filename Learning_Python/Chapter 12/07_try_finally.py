def main():
    try:
        a = int(input("Hey, Enter a number: "))
        print(a)
        return

        
    except Exception as e:
        print(e) 
        return

# finally block will be executed no matter what.
# The main use of finally block is in functins (it will ren in a function even after the return statement)
    finally:
        print("Hey I am inside of finally")


main()