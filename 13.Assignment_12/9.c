// Write a program to print cubes of the first N natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d\n", i * i * i);
        i++;
    }
    return 0;
}