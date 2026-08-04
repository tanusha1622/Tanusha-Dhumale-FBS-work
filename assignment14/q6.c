#include<stdio.h>
struct Date
{
    int date;
    int month;
    int year;
};
void storeDate(struct Date d[], int n);
void display(struct Date d[], int n);

int main()
{
    struct Date d[3];

    storeDate(d, 3);
    display(d,3);
}

void storeDate(struct Date d[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Enter Date %d (Date Month Year): ", i + 1);
        scanf("%d%d%d", &d[i].date, &d[i].month, &d[i].year);
    }
}

void display(struct Date d[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Date %d Details\n", i + 1);
        printf("Date%d\n", d[i].date);
        printf("Month%d\n", d[i].month);
        printf("Year%d\n", d[i].year);
    }
}