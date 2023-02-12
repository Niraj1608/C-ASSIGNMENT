#include<stdio.h>

int main(void)
{
    int a, b;
    printf("Enter the values for the a and b: \n");
    scanf("%i%i", &a, &b);

    b = a + b;
    a = b - a;
    b = b - a;

    printf("The value of a and b after the swapping are %i and %i.", a, b);
}