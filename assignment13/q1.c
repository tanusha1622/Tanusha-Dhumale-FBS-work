#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements are:\n");
    for(i = 0; i < 5; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}