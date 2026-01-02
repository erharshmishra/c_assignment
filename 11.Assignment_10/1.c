// Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a positive number.", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number.", num);
    }
    else
    {
        printf("%d is a zero.", num);
    }
    return 0;
}