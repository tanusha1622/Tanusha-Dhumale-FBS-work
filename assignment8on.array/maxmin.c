#include<stdio.h>
int main()
{
	int arr[]={10,50,20,30,5};
	int size=5;
	
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		 max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	printf("Maximum =%d",max);
	printf("Minimum =%d",min);
	
}