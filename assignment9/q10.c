#include<stdio.h>
void sort(int arr[],int size);
int main()
{
    int arr[]={40,10,30,20,50};
    sort(arr,5);
    return 0;
}
void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Array:\n");

    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}