#include<stdio.h>

int main(void)
{
    int x, a, b;
    printf("Choose from these options:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &x);

    if(x == 1)
    {
        printf("Enter two value to add: ");
        scanf("%d%d", &a, &b);
        printf("The addition of the two value is %d.", a+b);
    }

    else if(x == 2)
    {
        printf("Enter two value to subtract: ");
        scanf("%d%d", &a, &b);
        printf("The subtraction of the two value is %d.", a-b);
    }

    else if(x == 3)
    {
        printf("Enter two value to multiply: ");
        scanf("%d%d", &a, &b);
        printf("The multiplication of the two value is %d.", a*b);
    }

    else if(x == 4)
    {
        printf("Enter two value to divide: ");
        scanf("%d%d", &a, &b);
        printf("The division of the two value is %d.", a/b);
    }
}
