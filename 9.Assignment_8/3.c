// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include <stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter coefficient of a quadratic equation respectivily : ");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("Given roots are real & distinct.");
    }
    else if (d == 0)
    {
        printf("Given roots are real & equal.");
    }
    else
    {
        printf("Given roots are imaginary.");
    }
    return 0;
}
