#include<stdio.h>
char *mystrchr(char[], char);
int main()
{
    char str[] = "Programming";

    printf("%s", mystrchr(str, 'g'));
}
char *mystrchr(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            return &str[i];
        }
    }

    return NULL;
}