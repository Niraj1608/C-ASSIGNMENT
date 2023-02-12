#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int array[n];

    int i;

    printf("\nEnter the element for the array.\n");
    for(i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int element;

    printf("\nEnter the element you want to find: ");
    scanf("%d", &element);

    printf("The element %d is at this index: \n", element);
    for(i = 0; i < n; i++)
    {
        if(array[i] == element)
        {
           printf("%d\n", i); 
        }
    }
}
