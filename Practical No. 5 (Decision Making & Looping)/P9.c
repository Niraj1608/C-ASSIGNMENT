#include<stdio.h>

int main()
{
    int n, i, temp = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 2; i <= (n/2); i = i + 1)
    {
        if(n%i == 0)
        {
            temp = 1;
        }
    }

    if(temp == 0)
    {
        printf("%d is a prime number.", n);
    }

    else
    {
        printf("%d is not a prime number.",n);
    }
}
