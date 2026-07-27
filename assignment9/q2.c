#include<stdio.h>
void search(int arr[],int size,int key);
int main()
{
    int arr[]={10,20,30,40,50};
    search(arr,5,40);
    return 0;
}
void search(int arr[],int size,int key)
{
    int i,found=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            printf("Found at index %d",i);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Not Found");
}