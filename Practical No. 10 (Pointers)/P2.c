#include<stdio.h>

int main()
{
    char string[100]; 
    puts("Enter the string: ");
    gets(string);

    char *p = string;
    int count = 0;

    while(*p != '\0')
    {
        count++;
        *p++;
    }

    printf("The legth of the string is %d.", count);
}
