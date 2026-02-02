// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
double power(double base, double exponent);
int main()
{
    double base, exponent, k;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exponent : ");
    scanf("%lf", &exponent);
    k = power(base, exponent);
    printf("%lf", k);
    return 0;
}
double power(double base, double exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    return base * power(base, exponent - 1);
}