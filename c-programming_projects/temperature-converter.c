#include <stdio.h>

double cel_to_fah(double cel)
{
    double temp = 1.8 * cel + 32;
    printf("%.2lf Celcius is %.2lf Fahrenheit", cel, temp);
}

double fah_to_cel(double fah)
{
    double temp = (fah - 32) * 5;
    temp /= 9;
    printf("%.2lf Fahrenheit is %.2lf Celcius", fah, temp);
}

int main()
{
    int choice;
    double temp;

    printf("What do you want to convert?\nEnter 1 to Convert Celcius to Fahrenheit\nEnter 2 to convert Fahrenheit to Celcius\n");
    printf("Enter an Option: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Temperature in Celcius: ");
        scanf("%lf", &temp);
        cel_to_fah(temp);
    }
    else if(choice == 2)
    {
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        fah_to_cel(temp);
    }
    else
    {
        printf("Please Enter a valid choice");
    }


    return 0;
}

