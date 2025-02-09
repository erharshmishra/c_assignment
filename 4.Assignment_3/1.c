// Write a program to input a character from the user and print its ASCII code.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);
    printf("ASCII code : %d", ch);
    return 0;
}