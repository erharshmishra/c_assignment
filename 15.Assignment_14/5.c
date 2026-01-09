// Write a program to reverse a given number.

#include <stdio.h>
int main()
{
    int num, result = 0;
    printf("Enter two numbers : ");
    scanf("%d", &num);
    while (num)
    {
        result = result * 10 + num % 10;
        num = num / 10;
    }
    printf("Reverse of given number : %d", result);
    return 0;
}