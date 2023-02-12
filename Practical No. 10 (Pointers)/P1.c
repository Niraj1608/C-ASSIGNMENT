#include<stdio.h>


int main()
{
    int a, *p;
    float b, *q;
    char c, *r;

    p = &a;
    q = &b;
    r = &c;

    printf("Enter the value of character: ");
    c = getchar();

    printf("Enter the value of integer: ");
    scanf("%d", &a);

    printf("Enter the value of float: ");
    scanf("%f", &b);

    printf("\nThe value stored at location %p is %d.", p, *p);
    printf("\nThe value stored at location %p is %.2f.", q, *q);
    printf("\nThe value stored at location %p is %c.", r, *r);
}
