// Write a program to calculate sum of cubes of first N natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i * i * i;
        i++;
    }
    printf("Sum : %d", sum);
    return 0;
}