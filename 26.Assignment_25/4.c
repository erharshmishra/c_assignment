// Write a recursive function to print first N odd natural numbers in reverse order.

#include <stdio.h>
void natNumber(int num, int i);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    natNumber(num, 1);
    return 0;
}

void natNumber(int num, int i)
{
    if (num > 0)
    {
        natNumber(num - 1, i + 2);
        printf("%d\n", i);
    }
}