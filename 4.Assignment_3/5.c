// Write a program to print a given number without its last digit.

#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter any number : ");
    scanf("%d", &num);
    result = num / 10;
    printf("Without last digit of number : %d", result);
    return 0;
}