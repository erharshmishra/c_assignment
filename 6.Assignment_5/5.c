// Write a program to input a number user and also input a digit.
// Append a digit in the number and print the resulting number.
// For example x = 234 and digit = 9 then resulting number is 2349.

#include <stdio.h>
int main()
{
    int num, a;
    printf("Enter a number and a digit : ");
    scanf("%d%d", &num, &a);
    num = num * 10 + a;
    printf("Resulting sum : %d", num);
    return 0;
}
