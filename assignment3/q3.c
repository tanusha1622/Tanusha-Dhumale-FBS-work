#include<stdio.h>
int main()
{
	int start = 3,end = 5;
	int sum = 0;
	
	while (start<=end)
	{
		sum=sum+start;
		start++;
		
	}
	printf("%d",sum);
	return 0;
	
}