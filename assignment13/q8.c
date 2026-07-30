#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int size = 5;
    int search;
    int i, found = 0;

    arr = (int *)malloc(size * sizeof(int));

    arr[0] = 20;
    arr[1] = 30;
    arr[2] = 50;
    arr[3] = 40;
    arr[4] = 10;

    printf("Enter a number: ");
    scanf("%d", &search);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == search)
        {
            printf("Number found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Number is not found");
    }

    free(arr);
}