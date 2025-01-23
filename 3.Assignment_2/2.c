// Write a program to calculate circumference of a circle.

#include <stdio.h>
int main()
{
    float r, c;
    printf("Enter the radius : ");
    scanf("%f", &r);
    c = 2 * 3.14 * r;
    printf("Circumference of circle is : %f", c);
    return 0;
}