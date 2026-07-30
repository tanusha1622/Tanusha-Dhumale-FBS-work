#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, *brr, *crr;
    int i;

    arr = (int *)malloc(5 * sizeof(int));
    brr = (int *)malloc(5 * sizeof(int));
    crr = (int *)malloc(10 * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 5 elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 5 elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    for(i = 0; i < 5; i++)
    {
        crr[i + 5] = brr[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);
}