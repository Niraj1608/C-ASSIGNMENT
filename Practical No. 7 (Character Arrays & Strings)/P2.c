#include<stdio.h>
#include<string.h>

int main()
{
    char s1[25];
    char s2[25];

    printf("Write a string to copy: ");
    gets(s1);

    strcpy(s2, s1);

    printf("Here is the second string: ");
    printf("%s", s2);
}
