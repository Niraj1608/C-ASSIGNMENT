#include<stdio.h>
#include<string.h>

int main()
{
    char s1[25];
    char s2[25];

    printf("Enter the first string: ");
    gets(s1);

    printf("Enter the second string: ");
    gets(s2);

    strcat(s1, s2);

    printf("Here is the final string: ");
    printf("%s", s1);
}
