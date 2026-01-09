// Write a program to check whether a given number is a prime number or not.

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter any number : ");
    scanf("%d", &num);
    if (num < 2)
    {
        printf("%d is not a prime number.", num);
    }
    else
    {
        for (i = 2; i < num; ++i)
        {
            if (num % i == 0)
            {
                printf("%d is not a prime number.", num);
                break;
            }
        }
        if (i == num)
        {
            printf("%d is a prime number.", num);
        }
    }
    return 0;
}