#include<stdio.h>
struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;
};
struct Product storeProduct();
void display(struct Product pr);

int main()
{
    struct  Product p1, p2, p3;

    p1 = storeProduct();
    p2 = storeProduct();
    p3 = storeProduct();
    
    display(p1);
    display(p2);
    display(p3);

}

struct Product storeProduct()
{
    struct Product pr;

    printf("Enter Product  Details (Id Name Quantity Price)");
    scanf("%d%s%d%f",&pr.id,pr.name,&pr.quantity, &pr.price);

    return pr;
}
void display(struct Product pr)
{
    printf("Product Details\n");
    printf("ID %d\n", pr.id);
    printf("Name %s\n", pr.name);
    printf("Quantity %d\n", pr.quantity);
    printf("Price %.2f\n", pr.price);
}

   
   
   