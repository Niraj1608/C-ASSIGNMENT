#include<stdio.h>

int main()
{
    int x;
    printf("Eneter the three digit number: ");
    scanf("%i", &x);

    int a = x / 100;
    int b = x % 100;
    int c = b / 10;
    int d = b % 10;
    
    printf("The sum of digits of %i is %i.", x, a + c + d);

}
