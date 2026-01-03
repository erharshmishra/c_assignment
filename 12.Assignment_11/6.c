// Write a program to print the first 10 even natural numbers.

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", 2 * i);
        i++;
    }
    return 0;
}