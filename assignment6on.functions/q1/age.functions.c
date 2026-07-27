#include<stdio.h>
int age();
int main()
{
	int x;
	x=age();
	if(x==1)
	  printf("CHILD");
	    else if(x==2)
	       printf("TEENAGER");
	         else if(x==3)
	            printf("ADULT");
	              else
	                printf("SENIOR");
}
int age()
{

	int age=90;
	if(age<12)
	  return 1;
	   else if(age <=19)
	     return 2;
	       else if(age <= 59)
	         return 3;
	           else
	              return 4;
	              
	        
}