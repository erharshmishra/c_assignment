// Write a program to swap values of two int variables.

#include <stdio.h>
int main()
{
    int a = 10, b = 20, c;
    printf("Before swap : a = %d and b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swap : a = %d and b = %d", a, b);
    return 0;
}