#include<stdio.h>
void alternate(int arr[],int size);
int main()
{
    int arr[]={10,20,30,40,50};
    alternate(arr,5);
    return 0;
}
void alternate(int arr[],int size)
{
    int i;
    for(i=0;i<size;i=i+2)
        printf("%d ",arr[i]);
}