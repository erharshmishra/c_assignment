// Write a function to transform string into lowercase.

#include <stdio.h>
#include <string.h>
void intoLowercase(char str[])
{
    int i;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Given string in lowercase : %s", str);
}

int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    intoLowercase(str);
    return 0;
}