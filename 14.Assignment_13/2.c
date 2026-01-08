// Write a program to calculate sum of the first N even natural numbers.

#include <stdio.h>
int main()
{
    int i = 0, n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }
    printf("Sum : %d", sum);
    return 0;
}