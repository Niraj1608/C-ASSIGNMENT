#include<stdio.h>
#include<math.h>

int power(int, int);

int main()
{
    int a, b;

    printf("Enter the base: ");
    scanf("%d", &a);

    printf("Enter the power: ");
    scanf("%d", &b);

    printf("The result is %d.", power(a, b));
}

int power(int x, int y)
{
    if(y == 1)
    {
        return x;
    }

    else
    {
        return x * pow(x, y - 1);
    }
}
