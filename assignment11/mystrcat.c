#include<stdio.h>
int mystrncat(char str1[], char str2[], int n);
int main()
{
    char str1[20] = "Hello";
    char str2[] = "World";

    mystrncat(str1, str2, 3);

    printf("%s", str1);
}
int mystrncat(char str1[], char str2[], int n)
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