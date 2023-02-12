#include<stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of row: ");
    scanf("%d", &r);
    
    printf("Enter the number of column: ");
    scanf("%d", &c);

    int array[r][c];
    int transpose[c][r];

    int i, j;

    printf("Enter the element of the Matrix.\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nHere is the Matrix: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
           printf("%d ", array[i][j]);
        }

        printf("\n");
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
           transpose[j][i] = array[i][j];
        }
    }

    printf("\nThe transpose of the Matrix is: \n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
           printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

}
