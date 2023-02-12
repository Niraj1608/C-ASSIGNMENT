#include<stdio.h>

int main(void)
{
    int a[3][3];
    int i = 0 , j = 0, min;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter the element[%d][%d] of the array: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    min = a[0][0];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    printf("The minimum element of the array is %d.", min);
    
}    

