// This is a program for displaying a digital clock.
//Set your time by inputing the values.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main()
{
    int h;
    int m;
    int i;

    printf("Set The Time\n");
    printf("Enter Hour: ");
    scanf("%d", &h);

    printf("Enter Minute: ");
    scanf("%d", &m);

    if(h > 12 || h < 0 || m > 60 || m < 0)
    {
        printf("\nInvalid 12 Hours Time Format\n");
        exit(0);
    }


    for(int i = 1; i <= 60; i++)
    {
        while(i <= 60)
        {
            printf("Time: ");
            i++;
            printf("%02dh : %02dm : %02ds ", h, m, i);
            sleep(1);
            system("cls");

            if(i == 60)
            {
                m++;
                i = 0;
            }
            if(m == 60)
            {
                h++;
                m = 0;
            }
            if(h > 12)
            {
                h = 1;
            }
            
        }
    }
    

    return 0;
}
