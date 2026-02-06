// Write a function to merge two arrays of the same size sorted in descending order.

#include <stdio.h>
void merge(int a[], int b[], int n, int c[])
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < n && j < n; k++)
    {
        if (a[i] > b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("Merged array : ");
    for (k = 0; k < 10; k++)
    {
        printf("%d ", c[k]);
    }
}

int main()
{
    int a[] = {20, 18, 13, 8, 2};
    int b[] = {15, 9, 6, 3, 1};
    int c[10];
    merge(a, b, 5, c);
    return 0;
}