# C] Write python program generate bills for grocery store-
# Accept from user:name of three items-Compute the actual cost payable by apply discount and tax.
# Print the bill.
n= int(input("Enter number of items: "))
print("**************Bill***********")
price = 0
for i in range(0, n):
    name = input("Enter name of item:")
    q = int(input("Enter quantity of item:"))
    cost = float(input("Enter cost of item:"))
    price = price + (cost * q)

tax = 0.05 * price
dis = 0.2 * price
total = (price + tax) - dis
print("**************************************")
print("Discount:", dis)
print("tax:", tax)
print("**************************************")
print("Totalpayment to pay:", total)
