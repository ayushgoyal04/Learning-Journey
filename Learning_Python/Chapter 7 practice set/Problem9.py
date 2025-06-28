n = int(input(  "Enter number: "))
i = 0
j = 0
# while(i<n):
#     j = 0
#     while(j<n):
#         if(j!=0 and j!=n-1):
#             print("*", end="")
#         else:
#             print(" ", end="")
#         j+=1
#     i+=1
#     print()

for i in range(0,n):
    for j in range(0,n):
        if(i==0 or i==n-1 or j==0 or j==n-1):
            print("*", end="")
        else:
            print(" ", end="")
    print()