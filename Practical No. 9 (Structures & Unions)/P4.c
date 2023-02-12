#include<stdio.h>

struct date1
{
    int date;
    int month;
    int year;
    enum {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun}day1;
};

union date2
{
    int date;
    int month;
    int year;
    enum {mon=1, tue, wed, thu, fri, sat, sun}day2;
};

int main()
{   
    struct date1 a;
    union date2 b;
    printf("Size of structure :%d\n",sizeof(a));
    printf("Size of union :%d\n",sizeof(b));
}
