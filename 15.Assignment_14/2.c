// Write a program to count digits in a given number.

#include <stdio.h>
int main()
{
    int i, count, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    for (count = 0; num; ++count)
    {
        num = num / 10;
    }
    printf("Digits in given number : %d", count);
    return 0;
}