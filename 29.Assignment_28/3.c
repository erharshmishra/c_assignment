// Write a recursive function to print first N terms of fibonacci series.

#include <stdio.h>
int calFib(int num, int a, int b);
int main()
{
    int num, k, a, b, c;
    printf("Enter a number : ");
    scanf("%d", &num);
    calFib(num, 0, 1);
    return 0;
}
int calFib(int num, int a, int b)
{
    if (num > 0)
    {
        printf("%d,", a);
        calFib(num - 1, b, a + b);
    }
    return 0;
}