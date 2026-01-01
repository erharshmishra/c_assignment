// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter any alphabet : ");
    scanf("%c", &alpha);
    if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("Given alphabet is in uppercase : %c", alpha);
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        printf("Given alphabet is in lowercase : %c", alpha);
    }
    else
    {
        printf("Given character is not a alphabet : %c", alpha);
    }
    return 0;
}