#include<stdio.h>

int binary_to_decimal(int);

int main(void)
{
    int a; 
    printf("Enter any binary number: ");
    scanf("%d", &a);

    binary_to_decimal(a);
}

int binary_to_decimal(int x)
{
    int rem;
    int weight = 1;
    int decimal = 0;

    while(x != 0)
    {
        rem = x % 10;
        decimal = decimal + rem*weight;
        x = x / 10;
        weight = weight*2;
    }

    printf("The Equivalent decimal value is %d.", decimal);

}
