// Write a recursive function to print reverse of a given number.

#include <stdio.h>
void natNumber(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    natNumber(num);
    return 0;
}

void natNumber(int num)
{
    if (num > 0)
    {
        printf("%d", num % 10);
        natNumber(num / 10);
    }
}