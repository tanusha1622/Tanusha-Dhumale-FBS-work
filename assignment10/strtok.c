#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Apple,Mango,Banana";

    char *p;

    p=strtok(str,",");

    while(p!=NULL)
    {
        printf("%s\n",p);
        p=strtok(NULL,",");
    }


}