#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "PROGRAM";
    int n = strlen(s);

    int i, j, k;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < n; i++)
    {
        for(j = n - 1 ; j >= i; j--)
        {
            printf(" ");
        }

        for(k = 0; k <= i; k++)
        {
            printf("%c", s[k]);
        }
        printf("\n");
    }
}
