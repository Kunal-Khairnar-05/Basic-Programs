// creating dates and time also comparing them using structure

#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
    int time;
} date;

typedef struct time
{
    int sec;
    int min;
    int hour;
} time;

void display(date d, time t)
{
    printf("\n The date is : %d/%d/%d \n", d.date, d.month, d.year);
    printf("\n The time is : %d:%d:%d \n", t.hour, t.min, t.sec);
}

int dateCmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    return 0;
}

int timeCmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }

    if (t1.hour < t2.hour)
    {
        return -1;
    }

    if (t1.min > t2.min)
    {
        return 1;
    }
    if (t1.min < t2.min)
    {
        return -1;
    }

    if (t1.sec > t2.sec)
    {
        return 1;
    }
    if (t1.sec < t2.sec)
    {
        return -1;
    }

    return 0;
}

int main()
{
    date d1 = {14, 01, 2022};
    date d2 = {13, 01, 2022};

    time t1 = {13, 50, 40};
    time t2 = {14, 50, 40};

    display(d1, t1);
    display(d2, t2);

    int a = dateCmp(d1, d2);
    int b = timeCmp(t1, t2);
    printf("\n Date comparison function returned %d \n", a);
    printf("\n Time comparison function returned %d \n", b);
    return 0;
}