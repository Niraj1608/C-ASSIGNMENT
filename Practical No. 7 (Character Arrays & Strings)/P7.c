#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    char b[100];

    puts("Enter the string: ");
    gets(a);

    int len = strlen(a);
    int i, j = 0;

    for(i = (len - 1); i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }

    int temp = 0;
    for(i = 0; i < len; i++)
    {
        if(a[i] != b[i])
        {
            printf("The given string is not palindrome.");
            break;
        }

        else
        {
            temp++;
        }
    }

    if(temp > 0)
    {
        printf("The given string is palindrome.");
    }
}
