#include<stdio.h>
int main()
{
	int n=10;
	int i,j,k,rem,sum,fact;
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		
		 for(j=i;j>0;j=j/10)
		 {
		 	rem=j%10;
		 	fact=1;
		 	
		 	for(k=1;k<= rem;k++)
		 	{
		 		fact=fact*k;
		 		
			 }
			 sum=sum+fact;
		}
		if(sum == i)
		  printf("%d ",i);
		  
}
}