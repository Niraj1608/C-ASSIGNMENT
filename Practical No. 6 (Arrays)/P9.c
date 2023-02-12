#include<stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of the row: ");
    scanf("%d", &r);

    printf("Enter the number of the column: ");
    scanf("%d", &c);

    int matrix1[r][c];
    int matrix2[r][c];

    int i, j;

    printf("\nEnter the element for the matrix1: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the element for the matrix2: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Element[%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nMatrix1: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", matrix1[i][j]);
        }

        printf("\n");
    }

    printf("\nMatrix2: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", matrix2[i][j]);
        }

        printf("\n");
    }

    printf("\nAddition of two matrix: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }

        printf("\n");
    }
}
