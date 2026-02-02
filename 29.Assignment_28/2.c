// Write a recursive function to calculate HCF of two given number.

#include <stdio.h>
int calFact(int num1, int num2);
int main()
{
    int num1, num2, hcf;
    printf("Enter a number : ");
    scanf("%d%d", &num1, &num2);
    hcf = calFact(num1, num2);
    printf("%d", hcf);
    return 0;
}

int calFact(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return calFact(num2, num1 % num2);
    }
}