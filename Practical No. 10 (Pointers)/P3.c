#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int a[n];
    int *p;

    printf("Enter the elements for array: \n");
    for(p = a; p <= a + (n -1); p++)
    {
        scanf("%d", p);
    }

    printf("Here are the elements of array in reverse order: ");
    for(p = a + (n - 1); p >= a; p--)
    {
        printf("%d ", *p);
    }
}
