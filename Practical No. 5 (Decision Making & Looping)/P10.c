#include <stdio.h>

int main()
{
   int a, b, i, j, k = 0, flag;

   printf("Enter the first number: ");
   scanf("%d", &a);

   printf("Enter the last number: ");
   scanf("%d", &b);

   printf("Prime numbers: \n");
   for(i = a; i <= b; i = i + 1)
   {
       if(i == 1)
       {
           continue;
       }
       flag = 0;
       for(j = 2; j <= i/2; j = j + 1)
       {
           if(i%j == 0)
           {
               flag = 1;
               break;
           }
       }
       if(flag == 0)
       {
           printf("%d\n", i);
       }
   }

}
