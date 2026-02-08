// Write a program to count spaces in a given srting.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char str[50];
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Spaces in given string : %d", count);
}