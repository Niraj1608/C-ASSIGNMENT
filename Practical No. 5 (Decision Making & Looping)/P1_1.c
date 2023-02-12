#include<stdio.h>

int main()
{
  int x;
  int y;
  
  printf("Enter the value of nth term: ");
  scanf("%d", &y);
  
  for(x = 1; x <= y; x++)
    printf("%d\n", x);
    
}
