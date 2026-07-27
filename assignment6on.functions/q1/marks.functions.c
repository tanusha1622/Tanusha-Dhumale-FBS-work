#include<stdio.h>
int marks();
int main()
{
	int a;
	a=marks();
	if(a==1)
	   printf("Distiction");
	   else if(a==2)
	     printf("First class");
	     else if(a==3)
	       printf("Second class");
	        else if(a==4)
	           printf("PASS");
	             else 
	                printf("Fail");
	            }
int marks()	  
{
		           
	int marks=20;
	 if(marks>75)
	   return 1;
	     else if(marks>65)
	        return 2;
	          else if (marks>55)
	            return 3;
	              else if(marks>=40)
	                 return 4;
	                    else 
	                       return 5;
	                 
}