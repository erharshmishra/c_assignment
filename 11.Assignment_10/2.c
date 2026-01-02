// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lowercase), a digit or a special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Given character is an alphabet (uppercase).");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Given character is an alphabet (lowercase).");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Given character is a digit.");
    }
    else
    {
        printf("Given character is special character.");
    }
    return 0;
}