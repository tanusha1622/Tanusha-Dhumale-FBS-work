#include<stdio.h>
int main()
{
	int arr[]={20,30,50,40,10};
	int size=5;
	int search;
	int i,found=0;
	
	printf("Enter a number");
	scanf("%d",&search);
	for (i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			printf("Number found at index %d",i);
			found=1;
			break;
			
		}
	}
	if(found==0)
	{
		printf("Number is not found");
	}
	}
