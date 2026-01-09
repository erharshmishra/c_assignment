// Write a program to calculate LCM of two number.

// Note
// LCM : i.e : 4 : 8, 12, 16, 20,......
// LCF : i.e : 6 : 2, 3.

#include <stdio.h>
int main()
{
    int num1, num2, L;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    for (L = num1 > num2 ? num1 : num2; L <= num1 * num2; L++)
    {
        if (L % num1 == 0 && L % num2 == 0)
        {
            break;
        }
    }
    printf("LCM of %d and %d is : %d", num1, num2, L);
    return 0;
}