// Write a program to calculate the length of the string ( without using builtin method ).

#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = -1;
    char str[50];
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    // str[strlen(str) - 1]='\0';
    for (i = 0; str[i]; i++)
    {
        count++;
    }
    printf("Lenght of string : %d", count);
}