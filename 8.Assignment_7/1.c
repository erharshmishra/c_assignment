// Write a program to check whether a given number is positive or non positive.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Given number is positive.");
    }
    else
    {
        printf("Given number is non positive.");
    }
    return 0;
}