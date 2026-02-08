// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char str[50], ch;
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a character : ");
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("%c -- %d", ch, count);
}