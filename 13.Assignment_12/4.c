// Write a program to print the first N odd natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d\n", 2 * i - 1);
        i++;
    }
    return 0;
}