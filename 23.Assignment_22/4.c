// Write a function to check whether a given number contains a given digit or not.

#include <stdio.h>
int containDigit(int num, int digit);
int main()
{
    int num, digit;
    printf("Enter a number : ");
    scanf("%d%d", &num, &digit);
    int res = containDigit(num, digit);
    if (res == 1)
    {
        printf("%d is present in %d.", digit, num);
    }
    else
    {
        printf("%d is not present in %d.", digit, num);
    }
    return 0;
}

int containDigit(int num, int digit)
{
    int num1 = num;
    while (num1)
    {
        int temp = num1 % 10;
        if (temp == digit)
        {
            return 1;
        }
        num1 = num1 / 10;
    }
    return 0;
}