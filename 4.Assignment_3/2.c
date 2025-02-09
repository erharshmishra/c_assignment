// Write a program to input an ASCII code from the user and print its corresponding character.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any ASCII code : ");
    scanf("%d", &num);
    printf("Corresponding character : %c", num);
    return 0;
}