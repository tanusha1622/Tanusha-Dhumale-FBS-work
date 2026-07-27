#include<stdio.h>
#include<string.h>

int main()
{
    if(strcoll("ABC","ABC")==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are Not Equal");
    }
}