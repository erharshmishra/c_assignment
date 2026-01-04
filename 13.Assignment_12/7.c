// Write a program to print the first N even natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d\n", 2 * num + 2 - 2 * i);
        i++;
    }
    return 0;
}