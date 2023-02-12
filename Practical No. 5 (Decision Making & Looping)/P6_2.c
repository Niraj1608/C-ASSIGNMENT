#include<stdio.h>

int main(void)

{
    int a, b, i, low, lcm;
 
    printf("Enter the first number: ");
    scanf("%d", &a);
 
    printf("Enter the second number: ");
    scanf("%d", &b);
 
    low = (a < b)? a : b ;
 
    while(i)
    {
        if(low%a == 0 && low%b == 0)
        {
            lcm = low;
            break;
        }
        
        low = low + 1;
    }
    
    printf("The LCM of %d and %d is %d.", a, b, lcm);
 
}
