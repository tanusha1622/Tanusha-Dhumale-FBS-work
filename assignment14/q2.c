#include<stdio.h>

struct Admin
{
    int id;
    char name[20];
    double salary;
    double allowance;
};

struct Admin storeAdmin();
void display(struct Admin);

int main()
{
    struct Admin a1, a2, a3;

    a1 = storeAdmin();
    a2 = storeAdmin();
    a3 = storeAdmin();

    display(a1);
    display(a2);
    display(a3);
}
struct Admin storeAdmin()
{
    struct Admin adm;

    printf("Enter Admin Details (Id Name Salary Allowance )");
    scanf("%d%s%lf%lf", &adm.id, adm.name, &adm.salary,&adm.allowance);

    return adm;
}

void display(struct Admin adm)
{
    printf("Admin  Details\n","ID%d\n", adm.id,"Name%s\n", adm.name,"Salary%lf\n", adm.salary,"Allowance%lf",adm.allowance);
}