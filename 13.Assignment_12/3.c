// Write a program to print the first N natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d\n", num + 1 - i);
        i++;
    }
    return 0;
}