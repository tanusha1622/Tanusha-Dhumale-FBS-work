#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int size = 5;

    arr = (int *)malloc(size * sizeof(int));

    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 20;
    arr[3] = 30;
    arr[4] = 5;

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    free(arr);
}