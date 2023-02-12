#include<stdio.h>

int main()
{
    int x, y, z;
    
    printf("Enter the first number: ");
    scanf("%d", &x);
    
    printf("Enter the last number: ");
    scanf("%d", &y);

    z = x;
    int i, j = 0, k  = 0;
    for(i = x ; i <= y ; i = i+1)
    {
        x = x + 1;
        if(x % 2 == 0)
        {
            j = j + 1;
        }
        
        else
        {
            k = k + 1;
        }
    }

    printf("The total even and odd numbers between %d and %d respectively are %d and %d.", z, y, j, k);
}
