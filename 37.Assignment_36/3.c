// Write a function to compare two strings.

#include <stdio.h>
#include <string.h>
void cmpString(char str1[], char str2[])
{
    int result;
    result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Both strings are same.");
    }
    else
    {
        printf("Both strings are not same.");
    }
}

int main()
{
    char str1[50], str2[50];
    printf("Enter first string : ");
    fgets(str1, 50, stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter second string : ");
    fgets(str2, 50, stdin);
    str2[strlen(str2) - 1] = '\0';
    cmpString(str1, str2);
    return 0;
}