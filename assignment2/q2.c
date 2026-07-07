#include<stdio.h>
int main(){
	
	int a=5,b=5,c=5;
	if(a==b && b==c)
	{
		printf("Equilateral Traingle");
	}
	else if(a==b|| b==c|| a==c)
	{
		printf("Isosceles Traingle");
	}
	else 
	{
		printf("Scalene Traingle");
	}
	return 0;
	
	
}