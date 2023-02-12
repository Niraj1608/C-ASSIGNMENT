#include<stdio.h>

int main()
{
    int x = 7;
    int y = 9;
    int z;

    z = x++ + ++y - x++ + --y;

    printf("%d", z);

}
