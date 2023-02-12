#include<stdio.h>

int prime(int);

int main(void)
{
    int a;
    
    printf("Enter any number greater than one: ");
    scanf("%d", &a);

    prime(a);
}

int prime(int x)
{
    int flag = 0;
    int i; 

    for(i = 2; i <= (x/2); i = i + 1)
    {
        if(x % i == 0)
        {
            flag = 1;
        }
    }

    printf("%d", flag);
}
