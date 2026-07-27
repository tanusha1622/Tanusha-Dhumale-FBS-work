#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Computer";

    memset(str,'*',4);

    printf("%s",str);

    
}