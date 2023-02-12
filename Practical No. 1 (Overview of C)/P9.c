#include<stdio.h>
#include<math.h>

void main()
{
    int x1, x2, y1, y2;
    float d;

    printf("Enter the the value of x1: ");
    scanf("%d", &x1);

    printf("Enter the the value of x2: ");
    scanf("%d", &x2);

    printf("Enter the the value of y1: ");
    scanf("%d", &y1);

    printf("Enter the the value of y2: ");
    scanf("%d", &y2);
    
    d = pow(pow((x2 - x1),2) + pow((y2 - y1),2),0.5);

    printf("The distance between two points is %f.", d);
}
