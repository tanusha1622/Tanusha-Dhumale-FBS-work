#include<stdio.h>
void sum(int*, int*, int*);
void main()
{
    int start, end, result = 0;
    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    sum(&start, &end, &result);
}

void sum(int *start, int *end, int *sum)
{
    while(*start <= *end)
    {
        *sum = *sum + *start;
        (*start)++;
    }

    printf("Sum = %d", *sum);
}