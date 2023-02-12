#include<stdio.h>

int main()
{
    int array[100] = {0} ;
    int n, position, i;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the array[%d] element: ", i);
        scanf("%d", &array[i]);
    }

    printf("The elements of array before delete element is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter the position(index) at which you want to delete the element: ");
    scanf("%d", &position);

    for(i = position; i < (n - 1); i++)
    {
        array[i] = array[i + 1];
    }


    printf("The elements of array after deleting a element is: \n");
    for(i = 0; i <= (n - 2); i++)
    {
        printf("%d ", array[i]);
    }
}
