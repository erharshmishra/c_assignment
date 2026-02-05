// Write a function to find the smallest number from the given array of any size [TSRS].

#include <stdio.h>
int minNum(int a[], int n)
{
    int i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n, i;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array's elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Min element of array is : %d", minNum(a, n));
    return 0;
}