// Write a program to find the nth term of the fibonacci series.

#include <stdio.h>
int main()
{
    int num, first = 0, second = 1, next;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("fibonacci series 0f %dth term is %d.", num, first);
    }
    else if (num == 1)
    {
        printf("fibonacci series 0f %dth term is %d.", num, second);
    }
    else
    {
        for (int i = 3; i <= num; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("fibonacci series 0f %dth term is %d.", num, second);
    }

    return 0;
}