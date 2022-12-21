#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MIN 1
#define MAX 100

int main()
{
    //Declare variables
    srand(time(0));
    int userInput;
    int guesses = 0;
    int num = (rand() % MAX) + MIN;

    do
    {
        //Prompt User for input
        printf("Enter your guess: ");
        scanf("%d", &userInput);

        //Set conditions for the guess
        if(userInput > num)
        {
            printf("Hint: %d too High, try a lower number.\n", userInput);
        }
        else if(userInput < num)
        {
            printf("Hint: %d too low, try a higher number.\n", userInput);
        }
        else
        {
            printf("%d is correct, you've won\n", userInput);
        }
        guesses++;
    
    
    } while (userInput != num);

    printf("You guessed %d times\n", guesses);
    

    printf("\nIf you found this program helpful, please leave a like.\n\nAlso, if you have any questions, contributions or corrections, please comment it.\nThank you.\n");
    


    return 0;
}


