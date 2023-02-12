#include<stdio.h>

int sum(int, int);

int main()
{
    int a, b;

    printf("Enter any two number to add: \n");

    printf("First number: ");
    scanf("%d", &a);

    printf("Second number: ");
    scanf("%d", &b);

    sum(a, b);
}

int sum(int x, int y)
{
    int z;
    z = x + y;
    printf("The sum of two number is %d.", z);
}
