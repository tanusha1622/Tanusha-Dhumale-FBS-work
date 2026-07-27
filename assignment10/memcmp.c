#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Apple";
    char str2[]="Apple";

    if(memcmp(str1,str2,5)==0)
    {
        printf("Both are Equal");
    }
    else
    {
        printf("Both are Not Equal");
    }

    
}