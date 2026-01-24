// Write a function to print first N odd natural numbers [TSRN].

#include <stdio.h>
void printOdd(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printOdd(num);
    return 0;
}

void printOdd(int num)
{
    for (int i = 1; i <= num; i = i + 2)
    {
        printf("%d\n", i);
    }
}