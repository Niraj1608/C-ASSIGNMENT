#include<stdio.h>

int main()
{
    float celcius, ferenhit;

    printf("Enter the value of temperature in celcius:");
    scanf("%f", &celcius);

    ferenhit = ((9*celcius)/5) + 32;

    printf("The ferenhit value is %f.", ferenhit);

}
