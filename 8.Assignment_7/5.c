// Write a program to check whether a given number is an even number or an odd number using bitwise operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num & 1)
    {
        printf("Given number is an odd number");
    }
    else
    {
        printf("Given number is an even number");
    }
    return 0;
}