#include<stdio.h>

void main()
{
    int radius;
    float area;
    float pi = 3.14;

    printf("Enter the value of the radius of the circle:");
    scanf("%d", &radius);
    area = pi*(radius^2);

    printf("The area of the circle is %f.", area);

}
