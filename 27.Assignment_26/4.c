// Write a recursive function to print octal of a given decimal number.

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
        natNumber(num / 8);
        printf("%d", num % 8);
    }
}
