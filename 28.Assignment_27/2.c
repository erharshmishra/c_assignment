// Write a recursive function to calculate sum of first N odd natural numbers.

#include <stdio.h>
int calSum(int num, int i);
int main()
{
    int num, k;
    printf("Enter a number : ");
    scanf("%d", &num);
    k = calSum(num, 1);
    printf("Sum of first N odd natural number : %d", k);
    return 0;
}

int calSum(int num, int i)
{
    int sum;
    if (num > 0)
    {
        sum = i + calSum(num - 1, i + 2);
        return sum;
    }
}