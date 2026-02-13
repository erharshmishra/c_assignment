// Write a function to calculate length of the string.

#include <stdio.h>
#include <string.h>
void calLength(char str[])
{
    int i, count = 0;
    for (i = 0; i < str[i]; i++)
    {
        count++;
    }
    printf("Length of the string is : %d", count);
}

int main()
{
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    calLength(str);
    return 0;
}