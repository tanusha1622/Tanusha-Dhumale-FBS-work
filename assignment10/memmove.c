#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Laptop";
    char str2[20];

    memmove(str2,str1,7);

    printf("%s",str2);

    
}