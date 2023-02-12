#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int array[n];

    int i, j, k;

    printf("Enter the elements for array.\n");
    for(i = 0; i < n; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(array[i] == array[j])
            {
                for(k = j; k < (n -1); k++)
                {
                    array[k] = array[k + 1];
                }
                
                n--;
                j--;
            }
        }
    }

    printf("Here are the elements of the array after removing duplicate elements: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
