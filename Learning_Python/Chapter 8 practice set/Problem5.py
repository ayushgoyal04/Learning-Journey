def pattern(n):
    if n== 0:
        return 0
    print("*"*n)
    pattern(n-1)

n = int(input("Enter number: "))
pattern(n)

# t = "******************************************************"
# print(len(t))