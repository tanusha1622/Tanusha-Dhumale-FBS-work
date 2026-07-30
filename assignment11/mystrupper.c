#include<stdio.h>
int mystrupper(char str[]);
int main()
{
	char str[] ="tanusha";
	
	mystrupper(str);
	
	printf("Uppercase string=%s",str);
	
}
int mystrupper(char str[])
{
	int i;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i] <='z')
		{
			
	      str[i] = str[i] - 32;
	  }
}
}
