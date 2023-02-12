#include<stdio.h>
#include<string.h>

int main()
{
    char x[20];
    char r[20];
    char p[20];

    printf("Enter any decimal value:");
    gets(x);

    int i, j = 0, k = 0;
    for(i = 0; i < strlen(x); i++)
    {
        if(x[i] == '.')
        {
            k = i + 1;
            break;
        }

        else
        {
            r[i] = x[i];
        }

        while(k < strlen(x) || j < strlen(x))
        {
            p[j] = x[k];
            j++;
            k++;
        }
    }

    puts("Rupees: ");
    for(i = 0; i < strlen(r); i++)
    {
        printf("%d", r[i]);
    }

    puts("Paisa: ");
    for(i = 0; i < strlen(p); i++)
    {
        printf("%d", p[i]);
    }
}
