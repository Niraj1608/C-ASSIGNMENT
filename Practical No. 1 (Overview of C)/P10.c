#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Enter the Values of a, b and c\n");
    scanf("%f %f %f", &a, &b, &c);
    
    d = b * b - 4 * a * c;
    float x = pow(d, 0.5);

    if (d > 0)
    {
        x1 = (-b + x) / (2 * a);
        x2 = (-b - x) / (2 * a);
        printf("The Real Roots are %f and %f", x1, x2);
    }
    
    else if (d == 0)
    {
        x2 = x1 = -b / (2 * a);
        printf("The Equal Roots are %f", x1);
    }
    
    else
    {
        printf("The Roots are Imaginary");
    }

}
