// Write a program to calculate square of given number.
// Numbers are taken from user through keyboard.

#include <stdio.h>
int main()
{
    float num, square;
    printf("Enter Any Number : ");
    scanf("%f", &num);
    square = num * num;
    printf("Square of %f is : %f", num, square);
    return 0;
}