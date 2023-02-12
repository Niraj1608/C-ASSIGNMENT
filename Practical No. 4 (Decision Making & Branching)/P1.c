#include<stdio.h>

void main()
{
    int x;
    printf("Enter any number to know if it is odd or even: ");
    scanf("%i", &x);

    if(x==0)
    {
        printf("Zero is neither odd nor even.");
    }

    else if(x%2 == 0)
    {
        printf("The entered number is even.");
    } 

    else
    {
        printf("The enter number is odd.");
    }
}
