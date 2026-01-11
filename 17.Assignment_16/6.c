// Write a program to print all armstrong numbers under 1000.

#include <stdio.h>
int main()
{
    int count = 0, temp, sum = 0, num1, num2, i, p,j;
    for (j = 1; j <= 1000;j++){
    num1 = j;
    num2 = num1;
    sum = 0;
    count = 0;
    while (num1)
    {
        num1 = num1 / 10;
        count++;
    }
    while (num2)
    {
        temp = num2 % 10;
        p = 1;
        for (i = 1; i <= count; i++)
        {
            p = p * temp;
        }
        sum = sum + p;
        num2 = num2 / 10;
    }
    if (j == sum)
    {
        printf("%d is an armstrong number.\n", j);
    }
    // else
    // {
    //     printf("%d is not an armstrong number.\n", j);
    // }
}

    return 0;
}