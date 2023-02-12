#include<stdio.h>
#include<math.h>

int main()
{
    float p, r, n, t, a, i;
    printf("Enter the value of intial balance, p: ");
    scanf("%f", &p);

    printf("Enter the rate of interest, r: ");
    scanf("%f", &r);

    printf("Enter the number of times interest applied per time period, n: ");
    scanf("%f", &n);

    printf("Enter the number of time periods elapsed, t: ");
    scanf("%f", &t);

    a = p*(pow(1 + r/n, n*t));
    i = a - p;

    printf("The amount paid is %.2f and the interest is %.2f.", a, i);
}
