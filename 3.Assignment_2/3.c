// Write a program to calculate simple interest.

#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the principle amount, rate and time : ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple interest is %f", si);
    return 0;
}