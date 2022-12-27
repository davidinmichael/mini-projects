/**
 * You have a bowl on your counter with an even number of pieces of fruit in it. Half of them are bananas, and the other half are apples. You need 3 apples to make a pie. 
Task 
Your task is to evaluate the total number of pies that you can make with the apples that are in your bowl given to total amount of fruit in the bowl.
Input Format
An integer that represents the total amount of fruit in the bowl.
Output Format
An integer representing the total number of whole apple pies that you can make.
Sample Input
26 
Sample Output 
4
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int userInput;
    int playAgain;

    //Prompt user for inputs
    printf("Enter Number of Fruits: ");
    scanf("%d", &userInput);

    //Display the outputs
    printf("Amount of Apple: %d\n", userInput / 2);
    printf("Amount of Banana: %d\n", userInput / 2);
    printf("Amount of Pie you can make: %d\n", (userInput / 2) / 3);

    printf("Would you want to play again?\nEnter 1 for Yes and 2 for No.\n");
    scanf("%d", &playAgain);

    if(playAgain == 2)
    {
        printf("Thank you for playing, hope you had a great time.");
    }
    else if(playAgain == 1)
    {
        do
        {
        //Prompt user for inputs
        printf("Enter Number of Fruits: ");
        scanf("%d", &userInput);

        //Display the outputs
        printf("Amount of Apple: %d\n", userInput / 2);
        printf("Amount of Banana: %d\n", userInput / 2);
        printf("Amount of Pie you can make: %d\n", (userInput / 2) / 3);

        printf("Would you want to play again?\nEnter 1 for Yes and 2 for No.\n");
        scanf("%d", &playAgain);
        }while(playAgain == 1);
    }
    else
    {
        printf("\n%d is not a valid option, please enter a valid option\n", playAgain);
        while(playAgain > 2)
        {
            //Prompt user for inputs
            printf("\nEnter 1 for Yes and 2 for No.\n");
            scanf("%d", &playAgain);

        }
        
    }

    do
    {
        //Prompt user for inputs
    printf("Enter Number of Fruits: ");
    scanf("%d", &userInput);

    //Display the outputs
    printf("Amount of Apple: %d\n", userInput / 2);
    printf("Amount of Banana: %d\n", userInput / 2);
    printf("Amount of Pie you can make: %d\n", (userInput / 2) / 3);

    printf("Would you want to play again?\nEnter 1 for Yes and 2 for No.\n");
    scanf("%d", &playAgain);

    if(playAgain == 2)
    {
        printf("Thank you for playing, hope you had a great time.");
    }
    else if(playAgain == 1)
    {
        do
        {
        //Prompt user for inputs
        printf("Enter Number of Fruits: ");
        scanf("%d", &userInput);

        //Display the outputs
        printf("Amount of Apple: %d\n", userInput / 2);
        printf("Amount of Banana: %d\n", userInput / 2);
        printf("Amount of Pie you can make: %d\n", (userInput / 2) / 3);

        printf("Would you want to play again?\nEnter 1 for Yes and 2 for No.\n");
        scanf("%d", &playAgain);
        }while(playAgain == 1);
    }
    else
    {
        //printf("\n%d is not a valid option, please enter a valid option\n", playAgain);
        while(playAgain > 2)
        {
            //Prompt user for inputs
            printf("\n%d is not a valid option, please enter a valid option, Enter 1 for Yes and 2 for No.\n", playAgain);
            scanf("%d", &playAgain);

        }
        
    }
    } while(playAgain == 1);
    


    printf("\nIf you found this program helpful, please leave a like.\n\nAlso, if you have any questions, contributions or corrections, please comment it.\nThank you.\n");
    


    return 0;
}
