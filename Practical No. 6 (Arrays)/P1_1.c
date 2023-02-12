#include<stdio.h>

int main(void)
{
    int a[3][3];
    int i = 0 , j = 0, max = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter the element[%d][%d] of the array: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The maximum element of the array is %d.", max);
    
}    
