// Write a function to reverse a string.

#include <stdio.h>
#include <string.h>
void reverseString(char str[])
{
    int i, l;
    char ch;
    l = strlen(str);
    for (i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }
    printf("Reverse of given string : %s", str);
}

int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    reverseString(str);
    return 0;
}