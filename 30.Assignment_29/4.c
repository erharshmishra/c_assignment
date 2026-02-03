// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], i, max;
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
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nGreatest number in the array is : %d", max);

    return 0;
}