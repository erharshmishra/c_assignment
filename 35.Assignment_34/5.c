// Write a program to convert a given string into uppercase.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[50];
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}