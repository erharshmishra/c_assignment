// Write a function to find a character in a given string between specified indices.
// Start index and end index.

#include <stdio.h>
#include <string.h>
void findCharacter(char str[], char ch, int m, int n)
{
    int i;
    for (i = m; i <= n; i++)
    {
        if (str[i] == ch)
        {
            printf("%c is found at index %d", ch, i);
        }
    }
}

int main()
{
    int m, n;
    char str[50], ch;
    printf("Enter string : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("Enter start index and end index respectivily : ");
    scanf("%d%d", &m, &n);
    findCharacter(str, ch, m, n);
    return 0;
}