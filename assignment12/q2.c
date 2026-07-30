#include<stdio.h>
int main()
{
    char str[100], ch;
    int i, flag = 0;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character to Search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character Found at Index = %d\n", i);
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("Character Not Found");
    }
}