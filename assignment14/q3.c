#include<stdio.h>
struct HR
{
    int id;
    char name[20];
    double salary;
    double commission;
};

struct HR storeHR();
void display(struct HR hr, int n);

int main()
{
    struct HR h1, h2, h3;

    h1 = storeHR();
    h2 = storeHR();
    h3 = storeHR();

    display(h1,1);
    display(h2,2);
    display(h3,3);
}
struct HR storeHR()
{
    struct HR hr;

    printf("Enter HR Details (Id Name Salary Commission)");
    scanf("%d%s%lf%lf", &hr.id, hr.name, &hr.salary,&hr.commission);

    return hr;
}
void display(struct HR hr, int n)

{
    printf("HR Details\n","ID%d\n", hr.id,"Name%s\n", hr.name,"Salary%lf\n", hr.salary,"Commission%lf",hr.commission);
}