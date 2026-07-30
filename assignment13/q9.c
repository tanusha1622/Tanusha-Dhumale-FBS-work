#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i, j, temp;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 elements\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array is\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}