#include<stdio.h>
void minmax(int arr[], int size);
int main()
{
    int arr[]={10,20,5,40,15};
    int size=5;
    minmax(arr,size);
    return 0;
}
void minmax(int arr[], int size)
{
    int i,min,max;
    min=max=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }
    printf("Minimum=%d\n",min);
    printf("Maximum=%d",max);
}