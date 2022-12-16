/**
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

Each number or word should be separated by a space
I modified the program to take inputs of the range of values.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    int firstNumber;
    int secondNumber;
    int i;

    //Prompt user for inputs
    printf("Enter Start Number: ");
    scanf("%d", &firstNumber);

    printf("Enter End Number: ");
    scanf("%d", &secondNumber);

    //Set conditions
    for(i = firstNumber; i <= secondNumber; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if(i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    //Closure and appreciation
    printf("\n\nIf you found this useful, please leave a like.\nIf you have any contributions, corrections or comments, please comment it.\nThank you.\n");



    return 0;
}

