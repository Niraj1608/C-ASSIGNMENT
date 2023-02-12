#include<stdio.h>

int main()
{
    
    int x, y, z;
    printf("Enter any three number: ");
    scanf("%d%d%d", &x, &y, &z);

    (x > y)?((x > z)?(printf("The x is greatest.")):(printf("The z is greatest."))):((y > z)?(printf("The y is greatest.")):(printf("The z is greatest.")));

}