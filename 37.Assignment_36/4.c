// Write a function to transform string into uppercase.

#include <stdio.h>
#include <string.h>
void intoUppercase(char str[])
{
    int i;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Given string in uppercase : %s", str);
}

int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    intoUppercase(str);
    return 0;
}