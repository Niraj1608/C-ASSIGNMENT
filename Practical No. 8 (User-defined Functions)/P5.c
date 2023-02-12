#include<stdio.h>

int swap(int, int);

int main(void)
{
    int x, y;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enetr the second number: ");
    scanf("%d", &y);

    printf("The value of a and b before swapping is %d and %d.\n", x, y);

    swap(x, y);
}

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("The value of a and b after swapping is %d and %d.\n", a, b);

}
