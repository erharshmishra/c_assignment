// Write a function to print all prime numbers between two given numbers [TSRN].

#include <stdio.h>
void prime(int m, int n);
int main()
{
    int m, n;
    printf("Enter two numbers : ");
    scanf("%d%d", &m, &n);
    prime(m, n);
    return 0;
}

void prime(int m, int n)
{
    int i, j;
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
}