#include<stdio.h>
#include<math.h>

int main()
{
  int x;
  int y;
  
  printf("Enter the value of nth term: ");
  scanf("%d", &y);
  
  for(x = 1; x <= y; x = x + 1)
  {
    printf("%d\n", x*x*x );
  } 
}
