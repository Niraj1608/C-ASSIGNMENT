#include<stdio.h>
#define PI 3.14

int main()
{
    float radius, area;
    printf("Enter the value of radius of the circle: ");
    scanf("%f", &radius);

    area = PI*radius*radius;

    printf("The area of the circle is %.2f unit square.", area);
}
