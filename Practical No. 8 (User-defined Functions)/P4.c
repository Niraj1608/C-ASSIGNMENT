#include<stdio.h>

int check(int, int);
int division(int, int);

int main(void)
{
    int x, y;
    
    printf("Enter the numenator: ");
    scanf("%d", &x);

    printf("Enter the denominator: ");
    scanf("%d", &y);

    check(x, y);

}

int check(int a, int b)
{
    if(b == 0)
    {
        printf("You can not divide by Zero.");
    }

    else
    {
        division(a, b);                     //nested function
    } 
}

int division(int a, int b)
{
    int c;
    c = a / b;
    printf("The answer is %d.", c);
}
