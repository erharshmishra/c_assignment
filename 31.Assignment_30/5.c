// Write a program in C to copy the elements of one array into another array. Take array values from the user.

#include <stdio.h>
int main()
{
    int a[10], i, b[10];
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
        b[i] = a[i];
    }
    printf("\nCopy of given array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}