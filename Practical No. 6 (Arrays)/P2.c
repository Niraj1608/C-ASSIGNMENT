#include<stdio.h>

int main()
{
    int array[100] = {0} ;
    int n, position, element, i;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the array[%d] element: ", i);
        scanf("%d", &array[i]);
    }

    printf("The elements of array before inserting element is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter the position(index) at which you want to insert the element: ");
    scanf("%d", &position);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    for(i = n; i > position; i--)
    {
        array[i] = array[i - 1];
    }

    array[position] = element;

    printf("The elements of array after inserting a element is: \n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
}
