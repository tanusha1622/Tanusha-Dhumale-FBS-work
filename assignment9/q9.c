#include<stdio.h>
void reverse(int arr[],int size);
int main()
{
    int arr[]={10,20,30,40,50};
    reverse(arr,5);
    return 0;
}
void reverse(int arr[],int size)
{
    int i;

    for(i=size-1;i>=0;i--)
        printf("%d ",arr[i]);
}