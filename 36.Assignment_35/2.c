// Write a program to reverse the string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, ch, l;
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    l = strlen(str);
    for (i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }
    printf("Reverse of given string : %s", str);
    return 0;
}