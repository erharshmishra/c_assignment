// Write a function to check whether a given number is even or odd.
// Return 1 if the number is even,otherwise return 0 [TSRS].

#include <stdio.h>
int checkEvenOdd(int num);
int main()
{
    int num, result;
    printf("enter a number : ");
    scanf("%d", &num);
    result = checkEvenOdd(num);
    printf("%d", result);
    return 0;
}

int checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
