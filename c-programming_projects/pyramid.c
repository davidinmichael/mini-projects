/**
 * Write a program that prints a given row of pyramid
*/
#include <stdio.h>
#include <string.h>


int main()
{
    int i, j, row, column;

    //Promp User for how many rows they need
    printf("How many rows of Pyramid do you need?: ");
    scanf("%d", &row);

    //Set conditional statements to print pyramid
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= 2 * row - 1; j++)
        {
            if(j >= row - (i - 1) && j <= row + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nIf you found this program helpful, please leave a like.\n\nAlso, if you have any questions, contributions or corrections, please comment it.\nThank you.\n");
    

    return 0;
}
