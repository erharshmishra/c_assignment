// Write a program to find first occurence of a given character in a given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[50], ch;
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a charcter : ");
    scanf("%c", &ch);
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] == ch)
        {
            break;
        }
    }
    if (str[i] != 0)
    {
        printf("First occurence of %c is found at index %d", ch, i);
    }
    else
    {
        printf("%c is not found", ch);
    }
    return 0;
}