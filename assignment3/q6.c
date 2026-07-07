#include<stdio.h>
int main()
{
	int n =3,i=1,sum=0;
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		
		i++;
	}
	if(sum==n)
	printf("perfect");
	else
	printf("Not perfect");
	
	return 0;
}