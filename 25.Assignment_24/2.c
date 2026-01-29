// Write a function to print first N terms of Fibonacci series [TSRN].

#include <stdio.h>
void fibonacci(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}

void fibonacci(int num)
{
    int first = 0, second = 1, next;
    printf("%d, ", first);
    printf("%d, ", second);
    for (int i = 3; i <= num; i++)
    {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }
}