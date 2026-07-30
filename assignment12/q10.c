#include<stdio.h>
int main()
{
    char str[100];
    int i, len=0, flag=1;

    printf("Enter String: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }

    for(i=0; i<len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }
}