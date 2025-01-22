// Write a program to calculate sum of two integers.
// Numbers are taken from user through keyboard.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Two Integers : ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Sum of %d and %d is : %d", a, b, c);
    return 0;
}