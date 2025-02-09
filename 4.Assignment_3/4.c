// Write a program to print last digit of a given number.

#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter any number : ");
    scanf("%d", &num);
    result = num % 10;
    printf("Last digit of number : %d", result);
    return 0;
}