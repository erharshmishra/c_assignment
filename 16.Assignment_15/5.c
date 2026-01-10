// Write a program to check whether two given numbers are co-prime or not.

#include <stdio.h>
int main()
{
    int num1, num2, H;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    for (H = num1 < num2 ? num1 : num2; H >= 1; H--)
    {
        if (num1 % H == 0 && num2 % H == 0)
        {
            break;
        }
    }
    if (H == 1)
    {
        printf("Co-Prime");
    }
    else
    {
        printf("Not Co-Prime");
    }
    return 0;
}