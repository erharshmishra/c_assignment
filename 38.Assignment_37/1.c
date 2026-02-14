// Write a function to count vowels in a given string.

#include <stdio.h>
#include <string.h>
void vowelCount(char str[])
{
    int i, j, count = 0;
    char vow[10] = "aeiouAEIOU";
    for (i = 0; i < str[i]; i++)
    {
        for (j = 0; j < vow[j]; j++)
        {
            if (str[i] == vow[j])
            {
                count++;
            }
        }
    }
    printf("In given string total present vowels : %d", count);
}

int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    vowelCount(str);
    return 0;
}