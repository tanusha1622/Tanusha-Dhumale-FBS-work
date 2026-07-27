#include<stdio.h>
void print(int*);
void main()
{
	int n=10;
	print(&n);

}
void print(int* n)
{

	
	int i =1;
	while(i<=*n)
	{
		printf(" %d",i);
		i++;
	}
	
	
}