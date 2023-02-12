#include<stdio.h>

int factorial(int);

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d.", a, factorial(a));
}

int factorial(int x)
{
    if(x <= 1)
    {
        return 1;
    }

    else
    {
        return x * factorial(x - 1);
    }
}
