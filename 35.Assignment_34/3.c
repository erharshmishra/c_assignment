// Write a program to count vowels in a given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count = 0;
    char str[50], v[] = "aeiouAEIOU";
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        for (j = 0; v[j]; j++)
        {
            if (str[i] == v[j])
            {
                count++;
            }
        }
    }
    printf("Total vowels in given string : %d", count);
}