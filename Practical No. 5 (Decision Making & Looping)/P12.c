#include<stdio.h>

int main()
{
    int n, m, p, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);
    p = n;

    while(n>0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }

    printf("The sum of the digits of %d is %d.", p, sum);
}
