#include<stdio.h>
int main(){
	
	int no =120;
	int r1,r2,r3,q1;
	
	r1 = no%10;
	q1 = no/10;
	r2 = q1%10;
	r3 = q1/10;
	
	if("r1==r3")
	{
		printf("Palindrome");
	}
	else{
		
		printf("Not palindrome");
	}
		
		
		
		return 0;
	}