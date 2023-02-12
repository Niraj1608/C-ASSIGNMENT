#include<stdio.h>
#include<math.h>

void main(){
    int x, y;

    printf("Enter the value of length of the Rectangle:");
    scanf("%d", &x);

    printf("Enter the value of width of the Rectangle:");
    scanf("%d", &y);

    printf("Area of the rectangle is %d.", x*y);
    printf("\nPerimeter of the rectangle is %d.", 2*x + 2*y);
    printf("\nLength of the diagonal of the rectangle is %f.", sqrt(x*x + y*y));
}
