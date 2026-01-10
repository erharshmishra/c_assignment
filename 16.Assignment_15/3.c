// Write a program to find next prime number of given number.

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter any number : ");
    scanf("%d", &num);
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
            printf("%d is a prime number.\n", num);
            break;
        }
    }
    return 0;
}