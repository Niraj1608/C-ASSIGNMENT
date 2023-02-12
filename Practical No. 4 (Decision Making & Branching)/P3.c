#include<stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            printf("a is greatest.");

        else 
            printf("c is greatest.");
    }

    else
    {
        if(b > c)
            printf("b is greatest.");

        else
            printf("c is greatest.");
    }
}
