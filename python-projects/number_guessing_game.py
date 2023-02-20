import random

a = random.randrange(1, 10)
number = 0
guesses = 0

while not number == a:
    number = int(input("Enter a number: "))
    guesses += 1
    if number > a:
        print(f"{number} too large, try a lesser number")
    elif number < a:
        print(f"{number} too small, try a higher number")
    else:
        print("Yeah! you made it")
print(a)
print(f"You guessed {guesses} times")

print("\nIf you enjoyed this game, please leave a star/like")
print("If you have any contributions, suggestions, questions, please leave it in the comment box. \nThank you\n")
