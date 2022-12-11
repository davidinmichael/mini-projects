#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

//Declare variables
int number, multiplier = 0;

//Prompt User for inputs and collect inputs
printf("Enter a Number: ");
scanf("%d", &number);

//Declare conditional statements
while(multiplier <= 12)
{
    printf("%d x %d is %d\n", number, multiplier, number * multiplier);
    multiplier++;
}

//Closure and appreciation
printf("\nIf this was good, please leave a like, and if there's any contribution or correction, please comment it.\n");

//Return (0) : Always successful
    return 0;
}

