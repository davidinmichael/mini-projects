# Setting the game board
game_data = [1, 2, 3,
             4, 5, 6,
             7, 8, 9]

# Displaying the game board
def printBoard():
    print(f"  {game_data[0]} | {game_data[1]} | {game_data[2]}")
    print("-------------")
    print(f"  {game_data[3]} | {game_data[4]} | {game_data[5]}")
    print("-------------")
    print(f"  {game_data[6]} | {game_data[7]} | {game_data[8]}")

# Take user input and update the board with the input
def userInput():
    global sign
    while True:
        choice = int(input("Enter a Number between 1 to 9: "))
        if choice >= 1 and choice <= 9 and game_data[choice - 1] in range(0, 10):
            game_data[choice- 1] = sign
            break
        else:
            print("Position not available, try another")

# Checking for all possible wins
def checkWin():
    if game_data[0] == game_data[1] == game_data[2]:
        return True
    elif game_data[3] == game_data[4] == game_data[5]:
        return True
    elif game_data[6] == game_data[7] == game_data[8]:
        return True
    elif game_data[0] == game_data[3] == game_data[6]:
        return True
    elif game_data[1] == game_data[4] == game_data[7]:
        return True
    elif game_data[2] == game_data[5] == game_data[8]:
        return True
    elif game_data[0] == game_data[4] == game_data[8]:
        return True
    elif game_data[2] == game_data[4] == game_data[6]:
        return True
    # If no win
    return False

# Collecting the preferred sign of player one
sign = input("What sign would you want to use, X OR O: ")

# Main Game
while True:
    printBoard()
    userInput()
    if checkWin():
        printBoard()
        print(f"{sign} wins")
        break
    sign = "X" if sign == "O" else "O"
    if all(isinstance(elem, str) for elem in game_data):
        printBoard()
        print("It's a tie!")
        break
