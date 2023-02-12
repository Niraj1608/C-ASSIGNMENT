#include<stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("Enter the length of the first array: ");
    scanf("%d", &n1);                                        

    printf("Enter the length of the second array: ");
    scanf("%d", &n2);                                        

    n3 = n1 + n2;

    int array1[n1];
    int array2[n2];

    int i, j, k;

    printf("\nEnter the elements for array1.\n");
    for(i = 0; i < n1; i++)
    {
        printf("Enter the element[%d] for array1: ", i);
        scanf("%d", &array1[i]);                             
    }
    
    printf("\nEnter the elements for array2.\n");
    for(i = 0; i < n2; i++)
    {
        printf("Enter the element[%d] for array2: ", i);
        scanf("%d", &array2[i]);                             
    }

    printf("\nHere is the elements of array1 in original order: \n");
    for(i = 0; i < n1; i++)
    {
        printf("%d ", array1[i]);                            
    }

    printf("\nHere is the elements of array2 in original order: \n");
    for(i = 0; i < n2; i++)
    {
        printf("%d ", array2[i]);                            
    }

    //sorting array1
    int temp1;
    for(i = 0; i < (n1 - 1); i++)
    {
        for(j = 0; j < (n1 - 1); j++)
        {
            if(array1[j] > array1[j + 1])
            {
                temp1 = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp1;  
            }
        }
    }

    //sorting array2
    int temp2;
    for(i = 0; i < (n2 - 1); i++)
    {
        for(j = 0; j < (n2 - 1); j++)
        {
            if(array2[j] > array2[j + 1])
            {
                temp2 = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp2;  
            }
        }
    }

    printf("\nHere is the elements of array1 after sorting: \n");
    for(i = 0; i < n1; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nHere is the elements of array2 after sorting: \n");        
    for(i = 0; i < n2; i++)
    {
        printf("%d ", array2[i]);
    }

    int array3[n3];                                                    
    int a = 0, b = 0, c = 0;

    //merging and sorting third array
    while(a < n1 && b < n2)
    {
        if(array1[a] < array2[b])
        {
            array3[c] = array1[a];
            a++;
            c++;
        }

        else
        {
            array3[c] = array2[b];
            b++;
            c++;
        }
    }

    while(a < n1)
    {
        array3[c] = array1[a];
        a++;
        c++;
    }

    while(b < n2)
    {
        array3[c] = array2[b];
        b++;
        c++;
    }

    //printing the elements of third array
    printf("\nHere is the elements of array1 and array2 after merging and sorting: \n");
    for(i = 0; i < n3; i++)
    {
        printf("%d ", array3[i]);
    }
}
