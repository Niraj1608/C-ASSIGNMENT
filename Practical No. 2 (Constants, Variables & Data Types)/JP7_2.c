#include<stdio.h>

int main()
{
  float p, r, n;
  
  printf("Enter the value of p, r, n respectively: ");
  scanf("%f%f%f", &p, &r, &n);
  
  float x = (p*r*n)/100;
  float y = x + p;
  
  int interest = (int)x;
  int amount = (int)y;
  
  printf("The total intrest is %d and the total amount to pay is %d rupees.", interest, amount);
  
}