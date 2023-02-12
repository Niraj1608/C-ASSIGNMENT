#include<stdio.h>

int main(void)
{
    int x,y,z;
    printf("The Values are: ");
    scanf("%d%d",&x ,&y);
    z=x;
    x=y;
    y=z;
    printf("The value after swaping are %d and %d",x,z);
}
