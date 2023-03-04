import random

print("Welcome to the number guessing game")

# Set the amount of tries
tries = 5

#set the counter to count how many guesses
counter = 0

# Set the random number generator
number = random.randint(1, 100)

# Set the loop to collect inputs
while tries > 0:
    guess = int(input("Enter a number between 1 and 100: "))
    tries -= 1
    counter += 1

    if guess == number:
        print("Congratulations, you got it right")
        break
    elif guess > number:
        print("Number too large, try a lesser number")
    elif guess < number:
        print("Number too low, try a larger number")
        
# Setting the condition for using all trials
if tries == 0:
    print("Game Over, try again")
    print(f"You guessed {counter} times")
    print(f"The correct guess is {number}")


