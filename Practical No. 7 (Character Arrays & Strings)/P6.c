#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    char x;

    puts("Enter any string: ");
    gets(s);

    puts("Enter any character to search: ");
    scanf("%c", &x);

    int len = strlen(s);
    int count = 0;
    int i;

    printf("At these positions character %c occured: ", x);
    for(i = 0; i < len; i++)
    {
        if(s[i] == x)
        {
            count++;
            printf("%d ", i);
        }
    }

    printf("\nCharacter %c occured %d times in enetred string.", x, count);
}
