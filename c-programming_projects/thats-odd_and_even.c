/**
You want to take a list of numbers and find the sum of all of the even numbers in the list. Ignore any odd numbers.
Task:
Find the sum of all even integers and sum of odd integers in a list of numbers.
Input Format:
The first input denotes the length of the list (N). The next N lines contain the list elements as integers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

// Declare variables
    int number;
    int value;
    int sum = 0;

// To prompt user for input
    printf("Enter a Number: ");
    scanf("%d", &value);


// To print length of number
    for(number = 1; number <= value; number++)
    {
        printf("%d ", number);
    }

// To print sum of even numbers
    for(number = 2; number <= value; number += 2)
    {
        sum = sum + number;
    }

    printf("\nSum of Even Numbers = %d\n", sum);

// To print sum of Odd Numbers
    for(number = 1; number <= value; number += 2)
    {
        sum += 1;
    }

    printf("\nSum of Odd Numbers is = %d", sum);


    printf("\n\nPlease like and if you have any questions, contributions or corrections, leave it in the comment, thank you.\n");



    return 0;
}

