#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Programming";
    char str2[]="Programmer";

    if(strncmp(str1,str2,7)==0)
    {
        printf("First 7 Characters are Equal");
    }
    else
    {
        printf("Not Equal");
    }

    
}