#include<stdio.h>
void mystrncat(char[], char[], int);
int main()
{
    char str1[20] = "Hello";
    char str2[] = "World";

    mystrncat(str1, str2, 4);

    printf("%s", str1);
}
void mystrncat(char str1[], char str2[], int n)
{
    int i = 0, j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }
    while(j < n && str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}