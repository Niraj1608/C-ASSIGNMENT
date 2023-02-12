#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the length of the first array: ");
    scanf("%d", &n1);

    printf("Enter the length of the second array: ");
    scanf("%d", &n2);

    int a1[n1];
    int a2[n2];

    int *p1;
    int *p2;

    printf("Enter the elements for first array: \n");
    for(p1 = a1; p1 < (a1 + n1); p1++)
    {
        scanf("%d", p1);
    }

    printf("Enter the elements for second array: \n");
    for(p2 = a2; p2 < (a2 + n2); p2++)
    {
        scanf("%d", p2);
    }

    printf("\nThe elements of first array: \n");
    for(p1 = a1; p1 < (a1 + n1); p1++)
    {
        printf("%d ", *p1);
    }

    printf("\nThe elements of second array: \n");
    for(p2 = a2; p2 < (a2 + n2); p2++)
    {
        printf("%d ", *p2);
    }

    int x = 0;
    int i;

    if(n1 == n2)
    {
        for(i = 0; i < n1; i++)
        {
            if(*(a1 + i) != *(a2 + i))
            {
                x++;
            }
        }

        if(x == 0)
        {
            printf("\nThe array is identical.");
        }
        
        else
        {
            printf("\nThe arrays are not identical.");
        }
    }

    else
    {
        printf("\nThe arrays are not identical.");
    }
}
