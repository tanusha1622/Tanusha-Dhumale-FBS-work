#include<stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

struct Time acceptTime();
void displayTime(struct Time t);
struct Time addTime(struct Time t1, struct Time t2);
int convertToSeconds(struct Time t);

int main()
{
    struct Time t1, t2, result;

    printf("Enter first Time:\n");
    t1 = acceptTime();

    printf("\nEnter second Time:\n");
    t2 = acceptTime();

    printf("\nFirst Time: ");
    displayTime(t1);

    printf("Second Time: ");
    displayTime(t2);

    result = addTime(t1, t2);

    printf("\nAddition of two Times: ");
    displayTime(result);

    printf("\nFirst Time in seconds = %d",
           convertToSeconds(t1));

    printf("\nSecond Time in seconds = %d",
           convertToSeconds(t2));
}

struct Time acceptTime()
{
    struct Time t;

    printf("Enter Hours: ");
    scanf("%d", &t.hrs);

    printf("Enter Minutes: ");
    scanf("%d", &t.min);

    printf("Enter Seconds: ");
    scanf("%d", &t.sec);

    return t;
}

void displayTime(struct Time t)
{
    printf("%02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time t;

    t.sec = t1.sec + t2.sec;
    t.min = t1.min + t2.min;
    t.hrs = t1.hrs + t2.hrs;

    if(t.sec >= 60)
    {
        t.sec = t.sec - 60;
        t.min++;
    }

    if(t.min >= 60)
    {
        t.min = t.min - 60;
        t.hrs++;
    }

    return t;
}

int convertToSeconds(struct Time t)
{
    int totalseconds;

    totalseconds = (t.hrs * 60 * 60) + (t.min * 60) + t.sec;

    return totalseconds;
}