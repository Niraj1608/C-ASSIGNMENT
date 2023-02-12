#include<stdio.h>

int main(void)
{
    int x, y, z, w;
    printf("Enter the value of x, y and z: ");
    scanf("%i%i%i", &x, &y, &z);

    w = x;
    x = y;
    y = z;
    z = w;

    printf("After the roatating the value respectivly x, y and z are %i, %i and %i.", x, y, z);
}
