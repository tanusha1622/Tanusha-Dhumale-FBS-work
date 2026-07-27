#include<stdio.h>
int greater();
int main()
{
	int x;
	x=greater();
	if(x==1)
	   printf("A is Greater");
	else if(x==2)
	   printf("B is Greater");
	else
	   printf("C is Greater");     
	
}
int greater()
{
int a=55,b=90,c=409;
	if(a>b)
	{
	  if(a>c)
		return 1;
		  else
		    return 3;
		    }
              else
		     {
			  if(b>c)
		     	return 2;
			      else
			        return 3;
			 
		}
	}
	
	