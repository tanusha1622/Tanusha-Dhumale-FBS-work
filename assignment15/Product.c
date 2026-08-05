#include<stdio.h>
struct Product
{
	char name[20];
	float price;
	int quantity;
	
};
void accept(struct Product p[],int n);
void display(struct Product p[],int n);
float calculateTotal(struct Product p[], int n);

int main()
{
	struct Product p[10];
	int n;
	float total;
	
	printf("Enter number of Products");
	scanf("%d",&n);
	
	accept(p,n);
	
	printf("\n CART DETAILS\n");
	display(p,n);
	
	total = calculateTotal(p,n);
	
	printf("\nTotal Cost = %.2f",total);
	
}
void accept(struct Product p[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter details of Product %d",i+1);
		
		printf("Enter Product Name");
	    scanf("%s",p[i].name);
	    
	    printf("Enter Price");
	    scanf("%f",&p[i].price);
	    
	    printf("Enter Quantity ");
	    scanf("%d",&p[i].quantity);
	}
}
void display(struct Product  p[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" Product Name: %s",p[i].name);
		
		printf("Product Price %.2f",p[i].price);
	
	    printf(" Product Quantity %.2f",p[i].quantity);
	    
	    printf("Amount %.2f",p[i].price*p[i].quantity);
		
	}
}
float calculateTotal(struct Product p[],int n)		
{
	int i;
	float total = 0;
	for(i=0;i<n;i++)
	{
		total = total + (p[i].price * p[i].quantity);
		
	}
	return total;
}
