#include<stdio.h>
int main()
{
	int arr[5],brr[5],crr[10];
	int i;
	printf("Enter 5 elements of first array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Enter 5 numbers of second array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(i=0;i<5;i++)
	{
		crr[i+5]=arr[i];
	}
		printf("Merged array ");
		for(i=0;i<10;i++)
		{
			printf("%d",crr[i]);
		}
	}
