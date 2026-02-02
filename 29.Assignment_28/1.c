// Write a recursive function to calculate factorial of a given number.

#include <stdio.h>
int calFact(int num);
int main()
{
    int num, k;
    printf("Enter a number : ");
    scanf("%d", &num);
    k = calFact(num);
    printf("%d", k);
    return 0;
}

int calFact(int num)
{
    int fact;
    if (num == 1)
    {
        return 1;
    }
    fact = num * calFact(num - 1);
    return fact;
}