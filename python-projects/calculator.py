print("Welcome to my Calculator APP")

operator = input("Choose an operator(+, -, *, /): ")
num = float(input("Enter first Number: "))
num2 = float(input("Enter second Number: "))

if operator == "+":
    result = num + num2
    print(f"The result is {result}")
elif operator == "-":
    result = num - num2
    print(f"The result is {result}")
elif operator == "*":
    result = num * num2
    print(f"The result is {result}")
elif operator == "/":
    result = num / num2
    print(f"The result is {result}")
else:
    print("Please enter a valid operator")
