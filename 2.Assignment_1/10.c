// Write a program to find the area of circle.
// Take radius of circle from the user.

#include <stdio.h>
int main()
{
    float r, a;
    printf("Enter the value of radius : ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of circle : %f", a);
    return 0;
}