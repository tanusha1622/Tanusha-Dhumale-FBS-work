#include<stdio.h>
char *mystrrchr(char[], char);
int main()
{
    char str[] = "Programming";

    printf("%s", mystrrchr(str, 'g'));

}
char *mystrrchr(char str[], char ch)
{
    int i;
    char *ptr = NULL;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            ptr = &str[i];
        }
    }

    return ptr;
}