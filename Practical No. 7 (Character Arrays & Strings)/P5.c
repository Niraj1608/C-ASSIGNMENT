#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];

    puts("Enter the string: ");
    gets(s);

    int len = strlen(s);

    int i = 0;

    for(i = 0; i < len; i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            continue;
        }

        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }

        else
        {
            printf("%c", s[i]);
        }

    }
}
