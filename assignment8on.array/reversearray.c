#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	
	printf("Enter 5 elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Reverse the array");
	
	for(i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}