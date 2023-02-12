#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char sub[100];

    puts("Enter the string: ");
    gets(str);

    puts("Enter the substring: ");
    gets(sub);

    int len1 = strlen(str);
    int len2 = strlen(sub);

    int i, j, k, count = 0;

    for(i = 0; i < len1; i++)
    {
        k = i;
        for(j = 0; j < len2; j++)
        {
            if(str[k] != sub[j])
            {
                break;
            }

            k++;
        }

        if(j == len2)
        {
            count++;
            printf("Substring found at index %d to index %d of enetred string.\n", i, i + len2 - 1);
        }
    }

    printf("The sub string occured total %d times in enetred string.\n", count);    
}
