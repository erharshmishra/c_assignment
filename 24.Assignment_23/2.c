// Write a function to calculate HCF of two numbers [TSRS].

#include <stdio.h>
int calHcf(int num1, int num2);
int main()

{
    int num1, num2, HCF;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    HCF = calHcf(num1, num2);
    printf("HCF of %d and %d is %d", num1, num2, HCF);
    return 0;
}

int calHcf(int num1, int num2)
{
    int HCF;
    for (HCF = num1 < num2 ? num1 : num2; HCF > 0; HCF--)
    {
        if (num1 % HCF == 0 && num2 % HCF == 0)
        {
            break;
        }
    }
    return HCF;
}