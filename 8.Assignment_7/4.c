// Write a program to check whether a given number is an even number or an odd number without using % operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num / 2 * 2 == num)
    {
        printf("Given number is an even number.");
    }
    else
    {
        printf("Given number is an odd number.");
    }
    return 0;
}