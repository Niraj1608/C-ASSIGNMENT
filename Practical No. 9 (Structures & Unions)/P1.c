#include<stdio.h>

typedef struct
{
    char name[25];
    int roll;
    int m[5];
} student;

int main()
{
    student s;

    printf("Enter name: ");
    gets(s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    int i;
    printf("Enter the marks of five subject: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &s.m[i]);
    }

    int  sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + s.m[i];
    }

    float pr = sum / 5;

    if(pr >= 70.00)
    {
        printf("\nStudent name : %s\n", s.name);
        printf("Student's Roll number: %d\n", s.roll);
        printf("Student percentage: %.2f", pr);
    }

    else
    {
        printf("Stduent percentage is less than 70, so information won't be displayed.");
    }
}
