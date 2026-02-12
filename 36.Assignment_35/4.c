// Write a program in c to copy one string to another char array.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str1[50], str2[50];
    printf("Enter string : ");
    fgets(str1, 50, stdin);
    str1[strlen(str1) - 1] = '\0';
    for (i = 0; i < str1[i]; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Char Array : %s", str2);
    return 0;
}