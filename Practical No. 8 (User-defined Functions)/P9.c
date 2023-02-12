#include<stdio.h>

int fibonaci(int);

int main()
{
    int a;

    printf("Enter the nth number: ");
    scanf("%d", &a);

    printf("fibonaci(%d) = %d" , a, fibonaci(a));
}

int fibonaci(int x)
{
    if( x == 0 || x == 1)
    {
        return x;
    }

    else
    {
        return fibonaci(x - 1) + fibonaci(x - 2);
    }
}