print("Welcome to the Email Slicer, input your email address to get your username and domain")

email = input("Enter your email: ")

index = email.index("@")
username = email[:index]
domain = email[index + 1:]

print(f"The index is {index}")
print(f"Your username is {username}")
print(f"Your domain is {domain}")

print("If you found this program useful, please leave a like/star.\nIf you have any questions, contribution or suggestions, please leave it in the comment box.\nThank you")
