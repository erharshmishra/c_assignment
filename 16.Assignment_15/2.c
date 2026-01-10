// Write a program to print all numbers between two given number.

#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter any two numbers : ");
    scanf("%d%d", &m, &n);
    if (m < n)
    {
        for (j = m + 1; j < n; j++)
        {
            for (i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    break;
                }
            }
            if (j == i)
            {
                printf("%d is a prime number.\n", j);
            }
        }
    }
    else
    {
        for (j = n + 1; j < m; j++)
        {
            for (i = 2; i < j; i++)
            {
                if (j % i == 0)
                {

                    break;
                }
            }
            if (j == i)
            {
                printf("%d is a prime number.\n", j);
            }
        }
    }
    return 0;
}