#include<stdio.h>
void oddeven(int arr[],int size);
int main()
{
    int arr[]={10,15,22,31,40};
    oddeven(arr,5);
    return 0;
}
void oddeven(int arr[],int size)
{
    int i;
     printf("Even Numbers:\n");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
    printf("\nOdd Numbers:\n");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}