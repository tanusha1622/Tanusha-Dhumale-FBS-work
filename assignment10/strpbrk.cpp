#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello";
    char str2[]="aeiou";

    printf("%s",strpbrk(str1,str2));

    
}