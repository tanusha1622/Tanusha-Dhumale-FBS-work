#include<stdio.h>
int mystrcmp(char str1[],char str2[]);
int main()
{
	char str1[100],str2[100];
	
	printf("Enter first string: ");
	scanf("%s",str1);
	
	printf("Enter second string: ");
	scanf("%s",str2);
	
	if(mystrcmp(str1,str2)==0)
	printf("Both strings are equal");
	else
	printf("Both strings are not equal");
	
}
int mystrcmp(char str1[],char str2[])
{
	int i=0;
	
	while(str1[i] !='\0' && str2[i] !='\0')
	{
		if(str1[i] != str2[i])
		{
				return str1[i]-str2[i];
	}
	i++;
}
return str1[i]-str2[i];
}
