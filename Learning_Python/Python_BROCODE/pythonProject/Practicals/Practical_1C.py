# C] Write python program generate bills for grocery store-
# Accept from user:name of three items-Compute the actual cost payable by apply discount and tax.
# Print the bill.
item1=str(input("Name of item "))
cost1=int(input("Cost of item "))
qun1=int(input("Quantity "))
item2=str(input("Name of item "))
cost2=int(input("Cost of item "))
qun2=int(input("Quantity "))
item3=str(input("Name of item "))
cost3=int(input("Cost of item "))
qun3=int(input("Quantity "))
dis=0.1
tax=0.15
cost=qun1*cost1+qun2*cost2+qun3*cost3
t=cost*tax
ac_cost=t+cost
print("**********BILL**********")
print("Item Quantity Price")
print("",item1,"  ",qun1,"  ",cost1)
print("",item2,"  ",qun2,"  ",cost3)
print("",item3,"  ",qun3,"  ",cost3)
print("************************")
print("Total : ",cost )
print("************************")
print("Discount : 10%")
print("Tax : 15%")
print("************************")
print("Payable Amount : ",ac_cost)
print("************************")
