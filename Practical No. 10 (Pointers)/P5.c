#include<stdio.h>
#include<string.h>

int main()
{
    char string1[100];
    char string2[100];

    puts("Enter the first string: ");
    gets(string1);

    puts("Enter the second string: ");
    gets(string2);

    char *p1;
    char *p2;

    int n1 = strlen(string1);
    int n2 = strlen(string2);

    puts("\nHere is the first string: ");
    for(p1 = string1; p1 < (string1 + n1); p1++)
    {
        printf("%c", *p1);
    }

    puts("\nHere is the second string: ");
    for(p2 = string2; p2 < (string2 + n2); p2++)
    {
        printf("%c", *p2);
    }

    int i;
    int temp = 0;

    if(n1 == n2)
    {
        for(i = 0; i < n1; i++)
        {
            if(*(string1 + i) != *(string2 + i))
            {
                temp++;
            }
        }

        if(temp == 0)
        {
            printf("\nThe string is identical.\n");
        }

        else
        {
            printf("\nThe string is not identical.\n");
        }
    }

    else
    {
        printf("\nThe string is not identical.\n");
    }
}
