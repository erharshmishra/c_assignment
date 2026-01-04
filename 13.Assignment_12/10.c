// Write a program to print a table of N.

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}