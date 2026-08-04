#include<stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
void storeTime(struct Time *t);
void display(struct Time *t);

int main()
{
    struct Time t1;

    storeTime(&t1);
    display(&t1);
}
void storeTime(struct Time *t)
{
    printf("Enter Time (Hour Minute Second)");
    scanf("%d%d%d", &t->hour, &t->minute, &t->second);
}
void display(struct Time *t)
{
    printf("Time Details\n");
    printf("Hour%d\n", t->hour);
    printf("Minute%d\n", t->minute);
    printf("Second%d\n", t->second);
}