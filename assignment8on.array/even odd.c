#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	
	printf("Enter 5 numbers");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even number are\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d",arr[i]);
    	}
	}
	printf("Odd number are\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d",arr[i]);
			
}
}
}
