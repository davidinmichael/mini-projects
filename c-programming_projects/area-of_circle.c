#include <stdio.h>

//Define constants
#define PI 3.1415
#define circleArea(r) (PI * r * r)

int main()
{
    //Declare variable
    double radius;

    //Prompt user for inputs
    printf("Enter Radius: ");
    scanf("%lf", &radius);

    double area = circleArea(radius);

    printf("The area of the circle is %lf", area);

    //Closure and appreciation
    printf("\n\nIf you found this program helpful, please leave a like.\n\nAlso, if you have any questions, contributions or corrections, please comment it.\nThank You.\n");


    return 0;
}

