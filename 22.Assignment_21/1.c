// Write a function to calculate the area of a circle [TSRS].

#include <stdio.h>
float calArea(float r);
int main()
{
    float r, area;
    printf("enter the radius of circle : ");
    scanf("%f", &r);
    area = calArea(r);
    printf("area of circle is %.2f", area);
    return 0;
}

float calArea(float r)
{
    float area;
    area = 3.14 * r * r;
    return area;
}