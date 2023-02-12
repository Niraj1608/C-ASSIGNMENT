#include<stdio.h>

int main()
{
    int n, i, count = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    int temp = n;                    

    while(n != 0)
    {
        n = n / 10;
        count++ ;
    }

    int array[count];                

    for(i = 0; i < count ; i++)
    {
        int rem = temp % 10;
        array[i] = rem;
        temp = temp/10;             
    }

    printf("Here is the number in reverse order: ");
    for(i = 0; i < count; i++)
    {
        printf("%d", array[i]);     
    }

}

