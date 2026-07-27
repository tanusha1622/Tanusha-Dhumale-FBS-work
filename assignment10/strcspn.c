#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="123abc";
    char str2[]="abc";

    printf("%d",strcspn(str1,str2));

    
}