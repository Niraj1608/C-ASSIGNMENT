#include<stdio.h>

int main()
{
    int i,j,n=5,d;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            d=j-n;
            if( d>=-i+1 && d<=i-1 )
            {
                if(j==n)
                printf("%d",i);
                else 
                {
                    if(j>n)
                    printf("%d",n+i-j);
                    else
                    printf("%d",i+j-n);
                }
            }
            else
            printf(" ");
        }
         
        printf("\n");
    }
}
