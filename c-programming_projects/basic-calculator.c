// Import Libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Build main function
int main()
{

// Declare data types
double firstNumber;
double secondNumber;
int sign;

// Prompt user for type of operation and collect input
printf("What operation Do You Want To Perform?\n"
       "Enter 1 for Addition\n"
       "Enter 2 for Subtraction\n"
       "Enter 3 for Multiplication\n"
       "Enter 4 for Division\n"
       "Enter 5 for Exponent\n"
       "Input Choice Operation: ");
scanf("%d", &sign);

// Prompt user for inputs
printf("Enter First Number: ");
scanf("%lf", &firstNumber);

printf("Enter Second Number: ");
scanf("%lf", &secondNumber);

// Declare conditional statements
if(sign == 1){
    printf("Answer is %.2lf", firstNumber + secondNumber);
}

else if(sign == 2){
    printf("Answer is %.2lf", firstNumber - secondNumber);
}

else if(sign == 3){
    printf("Answer is %.2lf", firstNumber * secondNumber);
}

else if(sign == 4){
    printf("Answer is %.2lf", firstNumber / secondNumber);
}

else if(sign == 5){
    printf("Answer is %.2lf", pow(firstNumber, secondNumber));
}

else{
    printf("Please Enter A Valid Operation Choice");
}

// Closure and appreciation
printf("\nThank you, please upvote and give a contribution if any\n");
printf("Other functions will be added soon, check back another time");

// Return (0) : Always successful
    return 0;
}

