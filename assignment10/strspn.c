#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="abc123";
    char str2[]="abc";

    printf("%d",strspn(str1,str2));

    
}