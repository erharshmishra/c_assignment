// Write a recursive function to print first N even natural numbers.

#include <stdio.h>
void natNumber(int num, int i);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    natNumber(num, 2);
    return 0;
}

void natNumber(int num, int i)
{
    if (num > 0)
    {
        printf("%d\n", i);
        natNumber(num - 1, i + 2);
    }
}