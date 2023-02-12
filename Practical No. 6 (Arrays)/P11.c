#include<stdio.h>

int main()
{
    int r1, r2, c1, c2;

    printf("Enter the number of row for matrix1: ");
    scanf("%d", &r1);
    printf("Enter the number of column for matrix1: ");
    scanf("%d", &c1);

    printf("Enter the number of row for matrix2: ");
    scanf("%d", &r2);
    printf("Enter the number of column for matrix2: ");
    scanf("%d", &c2);

    int matrix1[r1][c1];
    int matrix2[r2][c2];

    if(c1 != r2)
    {
        printf("Sorry ! You can not multiply this two matrixs.");
    }

    else
    {
        int matrix3[r1][c2];

        int i, j, k;

        printf("\nEnter the element for the matrix1: \n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("Element[%d][%d]:", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
        
        printf("\nEnter the element for the matrix2: \n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("Element[%d][%d]:", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("\nMatrix1: \n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("%d ", matrix1[i][j]);
            }
            
            printf("\n");
        }
        
        printf("\nMatrix2: \n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", matrix2[i][j]);
            }
            
            printf("\n");
        }
        
        int sum = 0;
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                for(k = 0; k < r2; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];

                }

                matrix3[i][j] = sum;
                sum = 0;
            }
        }

        printf("\nResultant Matrix: \n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d  ", matrix3[i][j]);
            }
            
            printf("\n");
        }
    }
}

