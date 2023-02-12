#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the last number: ");
    scanf("%d", &y);

    int count_even = 0;
    int count_odd = 0;
    int i;

    for(i = x; i <= y; i++)
    {
        if(i % 2 == 0)
        {
            count_even++;
        }

        else
        {
            count_odd++;
        }
    }

    printf("The total even number between %d and %d is %d.\n", x, y, count_even);
    printf("The total odd number between %d and %d is %d.\n", x, y, count_odd);
}
