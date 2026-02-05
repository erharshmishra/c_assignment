// Write a function to find the greatest number from the given array of any size [TSRS].

#include <stdio.h>
int maxNum(int a[], int n)
{
    int i;
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
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
    printf("Max element of array is : %d", maxNum(a, n));
    return 0;
}