try:
    numerator = int(input("Enter numerator "))
    denominator = int(input("Enter denominator "))
    result = numerator / denominator
except ZeroDivisionError as e:
    print(e)
    print("Never divide by zero.")
except  ValueError as e:
    print(e)
    print("Enter only numbers.")
except Exception as e:
    print(e)
    print("Something went wrong.")
else:
    print(result)
finally:
    print("Have a nice day....")
    print("This wil always execute")