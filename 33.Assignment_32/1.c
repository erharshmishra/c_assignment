// Write a function to swap two elements of given array with specified indices.

#include <stdio.h>
void swap(int a[], int n, int i, int j)
{
    int t;
    printf("Before swap : ");
    for (int p = 0; p < n; p++)
    {
        printf(" %d ", a[p]);
    }
    t = a[i];
    a[i] = a[j];
    a[j] = t;
    printf("\nAfter swap : ");
    for (int q = 0; q < n; q++)
    {
        printf(" %d ", a[q]);
    }
}

int main()
{
    int n, i, j;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array's elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the both indexes : ");
    scanf("%d%d", &i, &j);
    swap(a, n, i, j);
    return 0;
}
