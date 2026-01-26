// Write a function to calculate LCM of two numbers [TSRS].

#include <stdio.h>
int calLcm(int num1, int num2);
int main()

{
    int num1, num2, LCM;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    LCM = calLcm(num1, num2);
    printf("LCM of %d and %d is %d", num1, num2, LCM);
    return 0;
}

int calLcm(int num1, int num2)
{
    int LCM;
    for (LCM = num1 > num2 ? num1 : num2; LCM <= num1 * num2; LCM++)
    {
        if (LCM % num1 == 0 && LCM % num2 == 0)
        {
            break;
        }
    }
    return LCM;
}