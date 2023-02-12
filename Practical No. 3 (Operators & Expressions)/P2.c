#include<stdio.h>

void main()
{
    int d, month,day;

    printf("Enter the the day to convert it into the months: ");
    scanf("%i", &d);

    month = (int)d/30;
    day = d%30;
    
    printf("This is approximately equal to total %i months and %i days.", month, day);
}
