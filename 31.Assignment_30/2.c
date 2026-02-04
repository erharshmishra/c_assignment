// Write a program to find second largest in an array. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], max, secondMax, i;
    printf("Enter 10 numbers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Given array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    max = secondMax = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if (a[i] > secondMax && a[i] != max)
        {
            secondMax = a[i];
        }
    }
    printf("\n%d", max);
    printf("\n%d", secondMax);

    return 0;
}