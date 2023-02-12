#include<stdio.h>

int main()
{
    char s[100];

    puts("Enter the string: ");
    gets(s);

    int n = sizeof(s);
    char x[n];

    int i = 0, j = 0;

    while(s[i])
    {
        while(s[i] == ' ')
        {
            i++;
        }

        while(s[i] != ' ' && s[i] != '\0')
        {
            x[j] = s[i];
            i++;
            j++;
        }

        if(s[i] == '\0' && x[j - 1] == ' ')
        {
            j--;
        }

        x[j] = s[i];
        j++;
    }

    int count = 0;

    for(i = 0; i < n; i++)
    {
        if(x[i] == ' ')
        {
            count++;
        }
    }

    printf("There are total %d words in enetred string.", count + 1);

}
