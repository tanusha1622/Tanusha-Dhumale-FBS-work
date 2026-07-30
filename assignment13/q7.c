#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 elements\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse the array\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}