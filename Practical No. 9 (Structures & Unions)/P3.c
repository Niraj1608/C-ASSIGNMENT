#include<stdio.h>

struct Date
{
    int date;
    int month;
    int year;
    enum {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun} day;
};

int checkdate(struct Date a, struct Date b);

int main()
{
    struct Date a;
    struct Date b;

    printf("Enter for Date1.\nEnter date: ");
    scanf("%d", &a.date);
    printf("Enter month: ");
    scanf("%d",&a.month);
    printf("Enter Year: ");
    scanf("%d", &a.year);

    printf("Enter for Date2.\nEnter date: ");
    scanf("%d", &b.date);
    printf("Enter month: ");
    scanf("%d",&b.month);
    printf("Enter Year: ");
    scanf("%d", &b.year);

    printf("\nDate1 : %d/%d/%d\n", a.date, a.month, a.year);
    printf("\nDate2 : %d/%d/%d\n", b.date, b.month, b.year);

    checkdate(a, b);
}

int checkdate(struct Date a, struct Date b)
{   int counter=0;

    if(a.date!=b.date)
    {
        counter++;
    }   
    
    if(a.month!=b.month)
    {
        counter++;  
    }

    if(a.year!=b.year)
    {
        counter++; 
    }

    if(counter==0)
    {
        printf("\nBoth are same.");
    }

    else
    {
        printf("\nBoth are different.");
    }

}
