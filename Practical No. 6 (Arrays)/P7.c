#include<stdio.h>

int main()
{
    int n;
    printf("Enter the leghth of the array: ");
    scanf("%d", &n);

    int array[n];
    int i, j, k, temp;

    printf("Enter the elements for the array.\n");
    for(i = 0; i < n; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < (n - 1); i++)
    {
        for(j = 0; j < (n - 1); j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
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

    printf("The largest element in the array is %d.\n", array[n - 1]);
    printf("The second largest value in array is %d.\n", array[n - 2]);  
}
