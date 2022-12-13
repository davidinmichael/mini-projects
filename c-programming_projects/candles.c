/**
It is almost Hanukkah and the store in your town is completely out of candles! You decide to place an order online, and you talk to your friends to see who else needs candles. How many candles should you order in total for the holiday?
Task
Determine how many candles you need to order based on how many friends ask to join your order (each friend will need 9 candles).
Input Format
An integer that represents the number of friends that ask to order candles with you.
Output Format
An integer that represents the total number of candles that you need to order.
Sample Input
4
Sample Output
45 (that is 4 friends + you)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    int friends;
    int i = 9;

    //Prompt user for input and collect input
    printf("Enter How Many Friends: ");
    scanf("%d", &friends);

    //Result
    int result = (friends * i) + 9;
    printf("%d", result);


    //Appreciation and closure
    printf("\n\nIf this made sense, please leave a like and hit the follow button.\n\nIf you have any comments, contributions or corrections, please comment it.\nThank you.\n");


    return 0;
}

