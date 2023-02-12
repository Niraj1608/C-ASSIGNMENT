#include<stdio.h>

int main()
{
  int x = 0;
  int y;
  
  printf("Enter the nth number: ");
  scanf("%d", &y);
  
  while(x < y)
  {
    x = x + 1;
    printf("%d\n", x);
  }
   
}
