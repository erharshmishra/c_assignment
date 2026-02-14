// Write a function to check whether a given string is an alphanumeric string or not.
// Alphanumeric string must contain atleast one alphabet and one digit.

#include <stdio.h>
#include <string.h>
void checkAlphanumeric(char str[])
{
    int i, isAlpha = 0, isDigit = 0;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] >= 'Z')
        {
            isAlpha++;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            isDigit++;
        }
    }
    if (isAlpha && isDigit)
    {
        printf("%s is alphanumeric.", str);
    }
    else
    {
        printf("%s is not alphanumeric.", str);
    }
}

int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    checkAlphanumeric(str);
    return 0;
}