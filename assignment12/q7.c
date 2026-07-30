#include<stdio.h>
int main()
{
    char str[100], newstr[100];
    int i, j=0;

    printf("Enter String: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(i%2==0)
        {
            newstr[j]=str[i];
            j++;
        }
    }

    newstr[j]='\0';

    printf("New String = %s", newstr);

}