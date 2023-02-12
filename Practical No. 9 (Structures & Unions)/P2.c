#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct time t1;
    printf("Enter the hour, minute and second for time t1: \n");
    scanf("%d%d%d", &t1.hours, &t1.minutes, &t1.seconds);

    struct time t2;
    printf("Enter the hour, minute and second for time t2: \n");
    scanf("%d%d%d", &t2.hours, &t2.minutes, &t2.seconds);

    printf("Here is the time t1: %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
    printf("Here is the time t1: %d:%d:%d\n", t2.hours, t2.minutes, t2.seconds);

    int h_dif = (t1.hours > t2.hours)?(t1.hours - t2.hours):(t2.hours - t1.hours);
    int m_dif = (t1.minutes > t2.minutes)?(t1.minutes - t2.minutes):(t2.minutes - t1.minutes);
    int s_dif = (t1.seconds > t2.seconds)?(t1.seconds - t2.seconds):(t2.seconds - t1.seconds);

    printf("The time difference between t1 and t2 is %d:%d:%d", h_dif, m_dif, s_dif);

}
