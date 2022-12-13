/**
You have a box of popsicles and you want to give them all away to a group of brothers and sisters. If you have enough left in the box to give them each an even amount you should go for it! If not, they will fight over them, and you should eat them yourself later.
Task
Given the number of siblings that you are giving popsicles to, determine if you can give them each an even amount or if you shouldn't mention the popsicles at all.
Input Format
Two integer values, the first one represents the number of siblings, and the second one represents the number of popsicles that you have left in the box.
Output Format
A string that says 'give away' if you are giving them away, or 'eat them yourself' if you will be eating them yourself.
Sample Input
3 9
Sample Output
give away
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    int popsicles;
    int siblings;

    //Prompt user for input and take inputs
    printf("How many Popsicles do you have to share?: ");
    scanf("%d", &popsicles);

    printf("How many siblings are you sharing to?: ");
    scanf("%d", &siblings);

    //Set conditional statements
    if(popsicles % siblings == 0)
    {
        printf("Give away\n");
    }

    else
    {
        printf("Eat them yourself\n");
    }

    //Closure and appreciation
    printf("\nIf you found this meaningful, please leave a like/follow\n");
    printf("\nIf you have any correction, contributions or corrections, please comment it.\nThank you\n");


    return 0;
}

