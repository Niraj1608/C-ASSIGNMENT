#include <stdio.h>

void main()
{
    float a, c;
    int b;

    printf("Enter the value in decimal point: ");
    scanf("%f", &a);

    b = (int)a;
    c = (a - b);

    printf("The value is %d rupees and %.f paisa.", b, c*100);
}
