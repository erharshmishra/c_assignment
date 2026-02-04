// Write a program to find second smallest number in an array. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], min, secondMin, i;
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
    min = a[0];
    secondMin = a[1];
    for (i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            secondMin = min;
            min = a[i];
        }
        else if (a[i] < secondMin && a[i] != min)
        {
            secondMin = a[i];
        }
    }
    printf("\n%d", min);
    printf("\n%d", secondMin);

    return 0;
}