/**
You are cheering on your favorite team. After each play, if your team got over 10 yards further down the field, you stand up and give your friend a high five. If they don't move forward by at least a yard you stay quiet and say 'shh', and if they move forward 10 yards or less, you say 'Ra!' for every yard that they moved forward in that play.
Task
Given the number of yards that your team moved forward, output either 'High Five' (for over 10), 'shh' (for <1), or a string that has a 'Ra!' for every yard that they gained.
Input Format
An integer value that represents the number of yards gained or lost by your team.
Output Format
A string of the appropriate cheer.
Sample Input
3
Sample Output
Ra!Ra!Ra!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    int yard;
    int i;

    //Prompt user for input and collect input
    printf("Enter How Many Yards: ");
    scanf("%d", &yard);

    //Set conditional statements
    if(yard >= 10)
    {
        printf("High five");
    }

    else if(yard < 1)
    {
        printf("shh");
    }

    for(i = 1; i <= yard && yard < 10; i++)
    {

        printf("rah!");
    }

    //Appreciation and closure
    printf("\n\nIf this made sense, please leave a like and hit the follow button.\n\nIf you have any comments, contributions or corrections, please comment it.\nThank you.\n");


    return 0;
}

