#include<stdio.h>

int main()
{
  int x, y;
  int z = 0;
  
  printf("Enter the value of nth term: ");
  scanf("%d", &y);
  
  for(x = 1; x <= y; x = x + 1)
   {
    z = z + x;
   }
  
  printf("Sum = %d", z);

}
