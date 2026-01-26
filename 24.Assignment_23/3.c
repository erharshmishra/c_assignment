// Write a function to check whether a given number is prime or not [TSRS].

#include <stdio.h>
int checkPrime(int num);
int main()
{
    int num, a;
    printf("Enter a number : ");
    scanf("%d", &num);
    a = checkPrime(num);
    printf("%d", a);
    return 0;
}

int checkPrime(int num)
{
    int count = 0;
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
