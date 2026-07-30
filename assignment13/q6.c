#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i, j, flag;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are:\n");
    for(i = 0; i < 5; i++)
    {
        flag = 1;

        if(arr[i] <= 1)
        {
            flag = 0;
        }

        for(j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    free(arr);
}