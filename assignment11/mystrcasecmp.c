#include<stdio.h>
int mystrncmp(char[], char[], int);
int main()
{
    char str1[] = "Programming";
    char str2[] = "Programmer";

    if(mystrncmp(str1, str2, 7) == 0)
    {
        printf("First 7 Characters are Equal");
    }
    else
    {
        printf("Not Equal");
    }
}
int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if(str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
    }
}