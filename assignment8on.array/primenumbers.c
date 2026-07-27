#include<stdio.h>
int main()
{
	int arr[5];
	int i,j,flag;
	
	printf("Enter 5 number:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Prime numbers are:\n");
	for(i=0;i<5;i++)
	{
		flag=1;
		if(arr[i]<1)
		{
			flag=0;
			
		}
		for(j=2;j<arr[i];i++)
		{
			if(arr[i]%j==0)
			{
				flag=0;
				break;
				
			}
		}
		if(flag==1)
		printf("%d",arr[i]);
	}
}