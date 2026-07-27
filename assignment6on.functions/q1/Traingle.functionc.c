#include<stdio.h>
int traingle();
int main()
{
	int a;
	a=traingle();
	if(a==1)
	  printf("Equilateral Traingle");
	else if(a==2)
	  printf("Isosceles Traingle");
	else
	printf("Scalene Traingle");
	  
}
int traingle()
{
	
	int a=5,b=5,c=7;
	if(a==b && b==c)
	{
		return 1;
	}
	else if(a==b|| b==c|| a==c)
	{
		return 2;
	}
	else 
	{
		return 3;
	}

	
	
}