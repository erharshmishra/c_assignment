// Write a program to check whether a given number is there in the fibonacci series or not.

#include <stdio.h>
int main()
{
    int num, first = 0, second = 1, next;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num == first || num == second)
    {
        printf("%d is in fibonacci series.", num);
    }
    else
    {
        for (int i = 0; i <= num; i++)
        {
            next = first + second;
            if (next == num)
            {
                printf("%d is in fibonacci series.", num);
                break;
            }
            first = second;
            second = next;
        }
        if(next != num){
            printf("%d is not in fibonacci series.", num);
        }
    }
    return 0;
}