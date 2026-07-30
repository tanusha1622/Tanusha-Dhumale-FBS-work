#include<stdio.h>
int mystrlower(char str[]);
int main()
{
	char str[] ="TANUSHA";
	
	mystrlower(str);
	
	printf("Lowercase string=%s",str);
	
}
int mystrlower(char str[])
{
	int i;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i] <='Z')
		{
			
	      str[i] = str[i] + 32;
	  }
}
}
