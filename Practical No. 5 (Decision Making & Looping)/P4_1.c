#include<stdio.h>

int main()
{
    int x = 2;
    int y;
    int sum = 0;

    printf("Enter the nth number: ");
    scanf("%d", &y);
    
    while(x <= y)
    {
        printf("%d\n", x);
        sum = sum + x;
        x = x + 2;
    }
    
    printf("the sum of even number is %d.", sum);
}
