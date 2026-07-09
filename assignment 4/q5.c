#include<stdio.h>
int main()
{
	int n =4;
	int ch =4;
	
	int i,count =0;
	int temp,rem,rev=0,sum=0;
	
	
	switch(ch)
	{
		case 1:if(n%2==0)
		  printf("Even");
		  else
		  printf("odd");
		  break;
		  
		  case 2:
		  	for(i=1;i<=n;i++)
		  	{
		  		if(n%i==0)
		  		  count++;
		  	}
		  	if(count==2)
		  	   printf("Prime");
		  	   else
		  	   printf("nOt prime");
		  	   break;
		  case 3:
		  	  rev=0;
		      for(temp=n;temp>0;temp = temp/10)
			  {
			  	rem=temp%10;
			  	rev=rev*10+rem;
			  }
			  
			  if(rev==n)
			     printf("Palindrome");
			     else
			     printf("not palindrome");
			     break;
			     
		   case 4:
		   	if(n>0)
		   	  printf("Positive");
		   	  else if(n<0)
		   	      printf("Negative");
		   	      else
		   	        printf("Zero");
		   	        break;
		   	        
		   	case 5:
			   for (temp=n;temp>0;temp=temp/10) 
			   {
			   	rem=temp%10;
			   	rev = rev*10+rem;
			   }
			   printf("Reverse=%d",rev);
			   break;
			   
			 case 6:
			 	for(temp=n;temp>0;temp=temp/10)
			 	{
			 		rem =temp %10;
			 		sum =sum +rem;
			 		
				 }
				   printf("sum of digits=%d",sum);
				     break;
				     
				     default:
				     	printf("INVALID CHOICE");
				     	
}
}