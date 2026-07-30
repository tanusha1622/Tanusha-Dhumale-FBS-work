#include<stdio.h>
int mystrstr(char str1[], char str2[]);
int main()
{
    char str1[] = "Programming";
    char str2[] = "grap";

    if(mystrstr(str1, str2))
        printf("Substring Found");
    else
        printf("Substring Not Found");
}

int mystrstr(char str1[], char str2[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while(str2[j] != '\0' && str1[i + j] == str2[j])
        {
            j++;
        }

        if(str2[j] == '\0')
        {
            return 1; 
        }
    }

    return 0; 
}