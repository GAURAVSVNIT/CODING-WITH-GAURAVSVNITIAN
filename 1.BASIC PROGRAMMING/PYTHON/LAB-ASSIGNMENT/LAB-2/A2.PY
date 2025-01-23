# 2. Write a program that repeatedly asks the user to enter product names and prices. Store all
# of these in a dictionary whose keys are the product names and whose values are the prices.
# When the user is done entering products and prices, allow them to repeatedly enter a
# product name and print the corresponding price or a message if the product is not in the
# dictionary.

products = {}
while True:
    product = input("Enter product name: ")
    if product == "done":
        break
    price = float(input("Enter price: "))
    products[product] = price
while True:
    product = input("Enter product name to get price: ")
    if product in products:
        print(f"Price of {product} is {products[product]}")
    else:
        print("Product not found in the dictionary.")







