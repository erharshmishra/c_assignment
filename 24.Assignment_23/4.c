// Write a function to find the next prime number of a given number [TSRS].

#include <stdio.h>
int checkPrime(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%d", checkPrime(num));
    return 0;
}

int checkPrime(int num)
{
    int i;
    for (num = num + 1;; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (num == i)
        {
            return num;
        }
    }
}