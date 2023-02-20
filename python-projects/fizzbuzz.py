start = int(input("Enter your start value: "))
stop = int(input("Enter your stop value: "))

for x in range(start, stop):
    if x % 3 == 0 and x % 5 == 0:
        print("FizzBuzz", end=" ")
    elif x % 3 == 0:
        print("Fizz", end=" ")
    elif x % 5 == 0:
        print("Buzz", end=" ")
    else:
        print(x, end=" ")

