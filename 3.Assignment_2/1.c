// Write a program to calculate average of three integers.
// Numbers are given by user.

#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter three integers : ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("Average of %d ,%d and %d is : %f", a, b, c, avg);
    return 0;
}