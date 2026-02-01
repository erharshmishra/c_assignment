// Write a recursive function to calculate sum of digits of a given number.

#include <stdio.h>
int calSum(int num);
int main()
{
    int num, k;
    printf("Enter a number : ");
    scanf("%d", &num);
    k = calSum(num);
    printf("Sum of first N natural number : %d", k);
    return 0;
}

int calSum(int num)
{
    int sum;
    if (num > 0)
    {
        sum = num % 10 + calSum(num / 10);
        return sum;
    }
}