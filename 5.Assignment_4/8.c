// Write a program to swap values of two int variables in single line arithmetic expression.

#include <stdio.h>
int main()
{
    int a = 10, b = 25;
    printf("Before swap : a = %d and b = %d\n", a, b);
    // (a ^= b), (b ^= a),(a^=b);
    // (a = a+b), (b= a-b),(a=a-b);
    a = a + b - (b = a);
    printf("After swap : a = %d and b = %d", a, b);
    return 0;
}