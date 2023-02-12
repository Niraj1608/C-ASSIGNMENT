#include<stdio.h>

int calculator(int, int , char);

int main()
{
    char x;
    int y,z;

    printf("Enter operation :");
    scanf("%c",&x); 

    printf("Enter Number-1 :");
    scanf("%d",&y); 

    printf("Enter Number-2 :");
    scanf("%d",&z);
    
    calculator(y,z,x);
}

int calculator(int y,int z,char x)
{
    int w = x;
    if(w == 43)
    {
        printf("%d+%d=%d\n",y,z,y+z);
    }
    
    else if(w == 45)
    {
        printf("%d-%d=%d\n",y,z,y-z);
    }
    
    else if(w == 42)
    {
        printf("%d*%d=%d\n",y,z,y*z);
    }
    
    else if(w == 47)
    {
        printf("%d/%d=%d\n",y,z,y/z);
    }
}
