// Write a recursive function to calculate sum of squares of first N natural numbers.

#include <stdio.h>
int calSum(int num);
int main()
{
    int num, k;
    printf("Enter a number : ");
    scanf("%d", &num);
    k = calSum(num);
    printf("Sum of squares of first N natural number : %d", k);
    return 0;
}

int calSum(int num)
{
    int square;
    if (num > 0)
    {
        square = num * num + calSum(num - 1);
        return square;
    }
}