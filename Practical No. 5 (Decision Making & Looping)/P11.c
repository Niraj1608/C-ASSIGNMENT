#include<stdio.h>

int main()
{
    char x;

    printf("\nUppercase alphabets: \n");
    for(x = 'A'; x <= 'Z'; x = x + 1)
    {
        printf("%c ", x);
    }

    printf("\nLowercase alphabets: \n");
    for(x = 'a'; x <= 'z'; x = x + 1)
    {
        printf("%c ", x);
    }
}
