#include<stdio.h>
#include<string.h>

int main()
{
    char names[10][50];
    char *a[10][50];
    int i,j;

    printf("Enter 10 names:\n");
    for(i=0;i<10;i++)
    {
        printf("%d:",i+1);gets(names[i]);

        for(j=0;names[i][j]!='\0';j++)
        {
            a[i][j]=&names[i][j];
        }  
    }

    int l[10]={0,0,0,0,0,0,0,0,0,0};
    int c=1;

    for(i=0;i<10;i++)
    {
        j=0;c=1;
        while(c!=0)
        { if(names[i][j]!='\0')j++;
        else c=0;}
        l[i]=j;
    }

    printf("Their lengths are respectively:\n");
    for(i=0;i<10;i++)
    {
        printf("%d:%d\n",i,l[i]);
    }
}
