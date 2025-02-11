// Write a program to input a three digit number and display the sum of the digits.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter 3-digits number : ");
    scanf("%d", &num);
    printf("Sum of digits : %d", num / 100 + num / 10 % 10 + num % 10);
    return 0;
}