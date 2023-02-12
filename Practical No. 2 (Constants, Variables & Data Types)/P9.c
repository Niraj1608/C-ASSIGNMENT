#include<stdio.h>
#include<ctype.h>

int main()
{
    char x;
    printf("Enter any alphabate: ");
    x = getchar();

    if(islower(x))
    {
        printf("%c", toupper(x));
    }

    else
    {
        printf("%c", tolower(x));
    }
}
