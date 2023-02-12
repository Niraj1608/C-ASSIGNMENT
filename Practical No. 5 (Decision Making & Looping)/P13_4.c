#include<stdio.h>

int main()
{
    int i,j,n=5,d;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            d=i-n;
            if(d>=-j+2 && d<=j-2)
            printf(" ");
            else
            printf("%d",j);
        }
         
        printf("\n");
    }
}
