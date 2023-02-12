#include<stdio.h>

int main()
{
    char x;
    int y;
    printf("Enter any character: ");
    scanf("%c", &x);

    y = (int)x;
    
    if(y >= 48 && y <= 57)
    {
        printf("%c is a number.", x);
    }

    else if(y >= 65 && y <= 90)
    {
        printf("%c is a alphabet.", x);
    }

    else if(y >= 97 && y <= 122)
    {
        printf("%c is an alphabet.", x);
    }

    else
    {
        printf("%c is a special character.", x);
    }
}
