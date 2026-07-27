#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Computer";
    char str2[20];

    memcpy(str2,str1,9);

    printf("%s",str2);

    
}