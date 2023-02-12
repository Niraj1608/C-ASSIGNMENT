#include<stdio.h>

int sort(int *array, int n);
int swap(int *x, int*y);

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int a[n];
    int *p = a;
    
    printf("Enter the elements for the array: \n");
    for(p = a; p <= a + (n - 1); p++)
    {
        scanf("%d", p);
    }

    printf("Here are the elements in original order: \n");
     for(p = a; p <= a + (n - 1); p++)
    {
        printf("%d ", *p);
    }

    sort(a, n);

    printf("\nHere are the elements in sorting order: \n");
    for(p = a; p <= a + (n - 1); p++)
    {
        printf("%d ", *p);
    }
}

int sort(int *a, int n)
{
    int temp, i, j;

    for(int i = 0; i < (n - 1); i++)
    {
        for(int j = 0; j < (n - 1); j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}


int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
