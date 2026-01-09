// Write a program to calculate factorial of a number.

#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter any number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; ++i)
    {
        fact = fact * i;
    }
    printf("Factorial of given number : %d", fact);
    return 0;
}