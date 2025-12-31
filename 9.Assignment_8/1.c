// Write a program to check whether a given number is a three digit number or not.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num > 99 && num < 1000)
    {
        printf("Given number is a three digit number.");
    }
    else
    {
        printf("Given number is not a three digit number.");
    }
    return 0;
}