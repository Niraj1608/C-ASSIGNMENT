#include<stdio.h>

int check(int);

int main(void)
{
    int x;
    
    printf("Enter any number to check if it's even: ");
    scanf("%d", &x);

    check(x);
}

int check(int a)
{
    if(a % 2 == 0)
    {
        printf("The number is even.");
    }

    else
    {
        printf("The number is not even.");
    }
}
