// Write a function to print first N prime numbers [TSTN].

#include <stdio.h>
int checkPrime(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}

int checkPrime(int num)
{
    int i, j;
    for (j = 0; j <= num; j++)
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