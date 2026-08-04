#include<stdio.h>
struct Complex
{
    float real;
    float imaginary;
};
void storeComplex(struct Complex *c);
void display(struct Complex *c);

int main()
{
    struct Complex c1;

    storeComplex(&c1);
    display(&c1);
}
void storeComplex(struct Complex *c)
{
    printf("Enter Complex(Real Imaginary)");
    scanf("%f%f", &c->real, &c->imaginary);
}
void display(struct Complex *c)
{
    printf("Complex Details\n");
    printf("Real %.2f\n",c->real);
    printf("Imaginary %.2f\n", c->imaginary);
}