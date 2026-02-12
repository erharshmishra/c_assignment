// Write a program in c to count the total number of alphabets, digits and special character in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, alpha = 0, digit = 0, character = 0;
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; i < str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if ((str[i] >= '0' && str[i] <= '9'))
        {
            digit++;
        }
        else
        {
            character++;
        }
    }
    printf("Alphabets in string : %d\n", alpha);
    printf("Digits in string : %d\n", digit);
    printf("Special characters in string : %d\n", character);
    return 0;
}