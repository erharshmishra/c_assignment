// Write a program to calculate the sum of all even numbers and sum of all odd number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], i, evenSum = 0, oddSum = 0;
    printf("Enter 10 values : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Given array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenSum = evenSum + a[i];
        }
        else
        {
            oddSum = oddSum + a[i];
        }
    }
    printf("\nSum of all even numbers : %d", evenSum);
    printf("\nSum of all odd numbers : %d", oddSum);
    return 0;
}