/**
 * Write a program that prints a given row of pyramid
*/
#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    int result = a + b;
    //return result;
    printf("%d", result);
}

int sub(int a, int b)
{
    int result = a - b;
    //return result;
    printf("%d", result);
}

int main()
{
    int fN, sN;
    char sign;

    printf("Choose Operator: ");
    scanf("%c", &sign);

    printf("Enter Number1: ");
    scanf("%d", &fN);

    printf("Enter Number2: ");
    scanf("%d", &sN);

    if(sign == '+')
    {
        //int result = add(fN, sN);
        //return result;
        //printf("%d", result);
        add(fN, sN);
    }
    else if(sign == '-')
    {
        int result1 = sub(fN, sN);
        return result1;
    }
    else
    {
        printf("Invalid operator");
    }
    
    

    return 0;
}
