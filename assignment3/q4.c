#include<stdio.h>
int main(){
	
	int n=8;
	int i=1,count=0;
	
	while(i<=n)
	{
		if(n%i==0)
		{ 
		   count++;
		   
		}
		i++;

	}
	if(count==2)
	  printf("Prime");
	  else
	  printf("Not prime");
	  
	  return 0;
	  
	
}