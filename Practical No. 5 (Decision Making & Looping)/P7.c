#include<stdio.h>

int main()

{
    int i, n, s = 1;
    
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i = i + 1)
    {
        s = s*i;
    }
    
    printf("The factorial of %d is %d.", n, s);
 
}
