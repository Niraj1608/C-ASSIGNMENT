#include<stdio.h>

int main(void)
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%i%i", &a, &b);

    if(a > b)
    {
        printf("a is greater than b.");
    }

    else
    {
        printf("b is greater than a.");
    }
}
