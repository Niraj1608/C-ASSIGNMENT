#include<stdio.h>

int change(int *, int *);

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The intial value of a and b is %d and %d.\n", a, b);

    change(&a, &b);

    printf("The final value of a and b is %d and %d.\n", a, b);
}

int change(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
