// Write a function to swap two characters of a given string with specified indices.

#include <stdio.h>
#include <string.h>
void swapCharacter(char str[], int m, int n)
{
    int i;
    char ch;
    ch = str[m];
    str[m] = str[n];
    str[n] = ch;
    printf("After swap : %s", str);
}

int main()
{
    int m, n;
    char str[50];
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter first index and second index respectivily : ");
    scanf("%d%d", &m, &n);
    swapCharacter(str, m, n);
    return 0;
}