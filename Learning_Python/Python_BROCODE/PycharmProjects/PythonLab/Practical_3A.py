print("Ayush Goyal" )
print("Practical: 03")
print("Roll no: 25")
print("Batch: A2")
# Aim- [A] A. Imagine you are managing an online store with various products. Create a Python program that maintains an
# inventory of products. Each product is represented by a dictionary with the following keys:
# 'product_id', 'product_name', 'price', and 'quantity_in_stock'. Implement the following functionalities:
# Add new products to the inventory.
# Update the quantity ofa specific product in stock.
# Display the product details, including product name, price, and quantity in stock, for all products in the inventory.
inventory = []

def add_product():
    product_id = int(input("Enter Product ID: "))
    product_name = input("Enter Product Name: ")
    price = float(input("Enter Price: "))
    quantity_in_stock = int(input("Enter Quantity in Stock: "))
    product = {
        'Product ID': product_id,
        'Product Name': product_name,
        'Price': price,
        'Quantity in Stock': quantity_in_stock
    }
    inventory.append(product)
    print(f"Product '{product_name}' added to the inventory.")
def update_quantity():
    product_id = int(input("Enter Product ID to update quantity: "))
    new_quantity = int(input("Enter the new quantity: "))
    for product in inventory:
        if product['Product ID'] == product_id:
            product['Quantity in Stock'] = new_quantity
            print(f"Quantity for '{product['Product Name']}' updated to {new_quantity}")
            return
    print(f"Product with ID {product_id} not found in the inventory.")
def display_inventory():
    print("\nInventory:")
    for product in inventory:
        print(f"Product Name: {product['Product Name']}")
        print(f"Price: ${product['Price']:.2f}")
        print(f"Quantity in Stock: {product['Quantity in Stock']}")
        print("-" * 30)
while True:
    print("\nOptions:")
    print("1. Add a Product to Inventory")
    print("2. Update Quantity of a Product")
    print("3. Display Inventory")
    print("4. Quit")

    choice = input("Enter your choice (1/2/3/4): ")

    if choice == '1':
        add_product()
    elif choice == '2':
        update_quantity()
    elif choice == '3':
        display_inventory()
    elif choice == '4':
        break
    else:
        print("Invalid choice. Please try again.")