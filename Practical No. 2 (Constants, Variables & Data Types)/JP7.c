#include<stdio.h>

int main()
{
  
  int p, n;
  float r;
  
  printf("Enter the value for p, n, r respectively: ");
  scanf("%d%d", &p, &n);
  scanf("%f", &r);
  
  float intrest = (p*r*n)/100;
  float amount = p + intrest;
  
  printf("The total intrest is %.2f and total amount to pay is %.2f rupees.", intrest, amount);
  
} 
