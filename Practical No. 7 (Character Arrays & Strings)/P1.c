#include<stdio.h>

int main()
{
    char s[25];
    printf("Enter your string: ");
    gets(s);

    int i, count = 0;
    
    for(i = 0; i < 25; i++)
    {
        if(s[i] == '\0')
        {
            break;
        }

        else
        {
            count++;
        }
    }

    printf("\nThe length of the string is %d.", count);
}
