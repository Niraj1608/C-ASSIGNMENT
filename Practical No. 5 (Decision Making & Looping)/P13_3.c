#include<stdio.h>

int main()
{
    int i, j, n = 5, d;
    for(i = 1; i <= n; i++)
    {
        for(j = 1;j <= n; j++)
        {
            if(i==1 && j>=5){  
            printf("A");}
            else if(i==2 && j>=4){  
            printf("B");}
            else if(i==3 && j>=3){  
            printf("C");}
            else if(i==4 && j>=2){  
            printf("D");}
            else if(i==5 && j>=1){  
            printf("E");}
            else 
            printf(" ");        
        }
         
        printf("\n");
    }
}
