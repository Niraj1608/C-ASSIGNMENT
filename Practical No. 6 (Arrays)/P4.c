#include<stdio.h>

int main()
{
    int a[10];
    int i, j, k, hold;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the a[%d] element of array: ", i);
        scanf("%d", &a[i]);
    } 

    printf("The array's element in the real order are: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }


    for(j = 0; j < 9; j++)
    {
        for(k = 0; k < 9; k++)
        {
            if(a[k] > a[k + 1])
            {
                hold = a[k];
                a[k] = a[k + 1];
                a[k + 1] = hold;
            }
        }
    }

    printf("\nThe array's element in the ascending order are: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
