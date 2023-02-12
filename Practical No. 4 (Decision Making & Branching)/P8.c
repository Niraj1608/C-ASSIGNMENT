#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks <= 100 && >= 80)
    {
        printf("Distinction.");
    }

    else if(marks <= 79 && >= 60)
    {
        printf("First class.");
    }

    else if(marks <= 59 && >= 35)
    {
        printf("Second class.");
    }

    else
    {
        printf("Fail.");
    }
}


