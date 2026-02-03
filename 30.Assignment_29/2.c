// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], i, sum = 0;
    float avg;
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
    avg = sum / 10.0; // for float value.
    printf("\nAverage of given array : %.2f", avg);
    return 0;
}