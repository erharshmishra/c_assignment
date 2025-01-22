// Write a program to calculate area of rectangle.
// Numbers are taken from user through keyboard.

#include <stdio.h>
int main()
{
    float l, b, a;
    printf("Enter Length and Breadth : ");
    scanf("%f %f", &l, &b);
    a = l * b;
    printf("Area of Rectangle %f and %f is : %f", l, b, a);
    return 0;
}