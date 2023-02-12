#include<stdio.h>

void main(){
    int i,j,n=5,d;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            d=j-n;
            if( d>=-i+1 && d<=i-1 )
            {
                if(n%2==0)
                printf("%d",(i+j)%2);   
                else if(n%2==1)
                printf("%d",(i+j+1)%2);
            }
            else
            printf(" ");
        }
        
        printf("\n");
    }
}
