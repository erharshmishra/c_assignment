// Write a program to calculate volume of a cuboid.

#include <stdio.h>
int main()
{
    float l, b, h, v;
    printf("Enter the length, breadth, height : ");
    scanf("%f %f %f", &l, &b, &h);
    v = (l * b * h);
    printf("Volume of cuboid is %f", v);
    return 0;
}