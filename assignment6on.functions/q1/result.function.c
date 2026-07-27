#include<stdio.h>
int result();
int main()
{
	int x;
	x=result();
	printf("RESULT =%d",x);
}
int result()
{
	int a ,b;
	char op;
	
	printf("Enter operator(+,-,*,/,%):");
	scanf(" %c",&op);
	
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	if(op == '*')
		printf("Result =%d0",a*b);
	else if(op=='+')
			printf("Result =%d",a+b);
	else if(op=='-')
	          printf("Result =%d",a-b);
	else if(op=='/')
	            printf("Result =%d",a/b);
	else if(op=='%')
           		printf("Result =%d",a%b);
           		
           		return 0;
		
	}
		
		