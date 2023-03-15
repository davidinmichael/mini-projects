import sys

class Bank_Account:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance
    
    def account_info(self):
        print(f"Your account name is {self.name}, and your current balance is #{self.balance}")

    def deposit(self):
        amount = int(input("Enter amount to Deposit: #"))
        self.balance += amount
        print(f"You have succesfully deposited #{amount} into your account. Your current balance is: #{self.balance}")
        print(f"Thank you {self.name} for banking with us.")

    def check_balance(self):
        print(f"Your balance is #{self.balance}")
        print(f"Thank you {self.name} for banking with us.")
    
    def withdraw(self):
        amount = int(input("Enter amount to withdraw: #"))
        if self.balance < amount:
            print("Insufficient Funds")
            print(f"Thank you {self.name} for banking with us.")
        else:
            self.balance -= amount
            print(f"Withdrawal of #{amount} is succesful")
            print(f"Your current balance is #{self.balance}")
            print(f"Thank you {self.name} for banking with us.")

# Set operations
operations = ("0. Open Account", "1. Deposit", "2. Withdraw", "3. Check Balance", "4. End")
# Save account owners info
account_owners = []

# Display Operations
def display_operations():
    print("What Operation do you want to perform, choose with the correct number")
    for operation in operations:
        print(operation)

def open_account():
    global name
    print("We are pleased to have you open an account with us.")
    name = input("Enter your name: ")
    account_owners.append(name)
    global deposit_amount
    deposit_amount = int(input("Enter amount to open account with: #"))
    print(f"Your account name is {name} and your current balance is {deposit_amount}")

# Select options
def select_options():
    global owner
    option = int(input("Enter Option: "))
    if option == 0:
        open_account()
        owner = Bank_Account(name, deposit_amount)
    elif option == 1:
        owner.deposit()
    elif option == 2:
        owner.withdraw()
    elif option == 3:
        owner.check_balance()
    elif option == 4:
        print("Exiting Program...")
        sys.exit()
    else:
        print("Invalid Option")

# Main Program
while True:
    display_operations()
    select_options()
    print(account_owners)

