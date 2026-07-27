#include<stdio.h>
void merge(int a[],int b[],int c[],int s1,int s2);
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[6];
    merge(a,b,c,3,3);

    return 0;
}
void merge(int a[],int b[],int c[],int s1,int s2)
{
    int i,j=0;
    for(i=0;i<s1;i++)
        c[j++]=a[i];

    for(i=0;i<s2;i++)
        c[j++]=b[i];

    for(i=0;i<s1+s2;i++)
        printf("%d ",c[i]);
}