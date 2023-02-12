#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][100];
    char temp[100];
    int i, j, r; 

    printf("Enter five strings: \n");
    for(i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            r = strcmp(str[i], str[j]);
            if(r > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    puts("Here are the strings after sort in lexicographical order: ");
    for(i = 0; i < 5; i++)
    {
        puts(str[i]);
    }
}
