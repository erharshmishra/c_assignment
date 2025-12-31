// Write a program to find the greatest among three given numbers.
// Print number once if the greatest number appears two or three times.

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("Greatest number is num1 : %d", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("Greatest number is num2: %d", num2);
    }
    else
    {
        printf("Greatest number is num3 : %d", num3);
    }
    return 0;
}