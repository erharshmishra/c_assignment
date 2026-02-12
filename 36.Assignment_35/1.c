// Write a program to convert a given string into lowercase.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Given string in lower case : %s", str);
    return 0;
}