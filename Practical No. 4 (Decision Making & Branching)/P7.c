#include<stdio.h>

int main(void)
{
    int years;
    printf("Enter any year: ");
    scanf("%d", &years);

    if(years % 400 == 0)
    {
        printf("The year %d is a leap yaer.", years);
    }

    else if(years % 400 != 0 && years % 100 != 0 && years % 4 == 0)
    {
        printf("The year %d is a leap year.", years);
    }

    else
    {
        printf("The year %d is not a leap year.", years);
    }
}
