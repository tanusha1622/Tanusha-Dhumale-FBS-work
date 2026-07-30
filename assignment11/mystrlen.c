#include<stdio.h>
int mystrlen(char str[]);
int main()
{
	char str[100];
	
	printf("Enter a string:");
	scanf("%s",str);
	
	printf("Length =%d",mystrlen(str));
	
}
int mystrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
	
}