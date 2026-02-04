// Write a program to sort elements of an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
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

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array : ");
    for (j = 0; j < 10; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}