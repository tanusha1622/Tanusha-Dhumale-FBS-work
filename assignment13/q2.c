#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 numbers\n");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers are\n");
    for(i=0; i<5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers are\n");
    for(i=0; i<5; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    free(arr);
}