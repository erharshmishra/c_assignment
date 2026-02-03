// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], i, sum = 0;
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
        sum = sum + a[i];
    }
    printf("\nSum of given array : %d", sum);
    return 0;
}