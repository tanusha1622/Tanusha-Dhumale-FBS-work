#include<stdio.h>
int main()
{
	int marks=90;
	if(marks>75)
	  printf("Distiction");
	  else if(marks>65)
	     printf("First class");
	       else if (marks>55)
	          printf("Second class");
	           else if(marks>=40)
	             printf("Pass");
	               else 
	                 printf("Fail");
	                 
	                 return 0;
}