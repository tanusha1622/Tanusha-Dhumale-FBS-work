#include<stdio.h>
void add(int a[],int b[],int c[],int size);
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={10,20,30,40,50};
    int c[5];
    add(a,b,c,5);
    return 0;
}
void add(int a[],int b[],int c[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}