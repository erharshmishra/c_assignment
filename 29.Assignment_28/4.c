// Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
int digitsCount(int num, int i);
int main()
{
    int num, k;
    printf("Enter a number : ");
    scanf("%d", &num);
    k = digitsCount(num, 0);
    printf("%d", k);
    return 0;
}
int digitsCount(int num, int i)
{
    int s;
    if (num == 0)
    {
        return i;
    }
    s = digitsCount(num / 10, i + 1);
}