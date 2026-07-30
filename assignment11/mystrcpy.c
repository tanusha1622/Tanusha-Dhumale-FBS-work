#include<stdio.h>
int mystrcpy(char dest[],char src[]);
int main()
{
	char str1[] = "Hello";
	char str2[20];
	
	mystrcpy(str2,str1);
	
	printf("Copied string = %s",str2);
}
int mystrcpy(char dest[],char src[])
{
	int i=0;
	
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		
	}
	dest[i]='\0';
}