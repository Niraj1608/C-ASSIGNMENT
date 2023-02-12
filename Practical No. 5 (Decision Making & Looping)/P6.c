#include<stdio.h>

int main()
{
  int a, b, i, gcd = 0;
 
  printf("Enter the first number: ");
  scanf("%d", &a);
 
  printf("Enter the second number: ");
  scanf("%d", &b);
 
  for(i = 1; i <= a && i <= b; i = i + 1)
  {
    if(a%i == 0 && b%i == 0)
    {
        gcd = i;
    }
  }
 
 printf("The GCD of %d and %d is %d.", a, b, gcd);
 
}
