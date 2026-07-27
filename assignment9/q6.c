#include<stdio.h>
void prime(int arr[],int size);
int main()
{
    int arr[]={2,5,8,11,15};
    prime(arr,5);
	 return 0;
}
void prime(int arr[],int size)
{
    int i,j,flag;
    for(i=0;i<size;i++)
    {
        flag=1;

        if(arr[i]<2)
            flag=0;

        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            printf("%d ",arr[i]);
    }
}