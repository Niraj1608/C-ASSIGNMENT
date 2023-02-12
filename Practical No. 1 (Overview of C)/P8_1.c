#include<stdio.h>

void main()
{
    float ferenhit, celcius;
    printf("Enter the value of the temperature in ferenhit:");
    scanf("%f", &ferenhit);

    celcius = (5*(ferenhit - 32))/9;

    printf("The Celcius value is %f.", celcius);
}
