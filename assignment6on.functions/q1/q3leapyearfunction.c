#include<stdio.h>
void leapyear();

int main()
{
	leapyear();
}

void leapyear()
{

	int year=2024;
	if (year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
		
	}
}