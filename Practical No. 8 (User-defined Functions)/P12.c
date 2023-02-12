#include<stdio.h>

int count(int);

int main()
{
    static int i = 0;
    while(i < 10)
    {
        count(i);
        i++;
    }
}

int count(int x)
{
    x++;
    printf("%d\n", x);
}
