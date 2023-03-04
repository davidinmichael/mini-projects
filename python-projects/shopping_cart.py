# Set the welcome message
print("Welcome to davidinmichael's Stores")
print("-------------------------------")

# Set the variable for the cart, I'm using dictionary
cart = {}

# Set the variable for total prices
total = 0

# Set the condition to collect the items and prices
while True:
    product = input("Enter a product to buy (q to quit): ")
    # Set the condition to exit from the loop

    if product == 'q' or product == 'Q':
        break
    else:
        price = int(input("Enter the amount you want to purchase: $"))
        total += price

    # Let's store the inputs in the dictionary
    cart[product] = price

# Let's print the list of items and prices in the dictionary
for product, price in cart.items():
    print(f"{product} : ${price}")

# Print the total
print(f"Your total: ${total}")

# Set the goodbye message (optional)
print("Thank you for buying from us, we look forward to having you another time")

# The end, now let's run the code

# Your exercise
# Implement the feature of printing the total prices
# Leave your code in the comment section
# Thank you for watching and please like and subscribe for more contents
