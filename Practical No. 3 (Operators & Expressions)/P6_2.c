#include<stdio.h>

int main()
{
    int x = 5;
    int y = 2;
    int  z;
    z = x++ * y++ / ++x - --y  % x++;

    printf("%d", z);
}
