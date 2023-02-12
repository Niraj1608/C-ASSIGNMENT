#include<stdio.h>

int main(void)
{
    int a[3][3];
    int i = 0 , j = 0;

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
            printf("element[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
}
