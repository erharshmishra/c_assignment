// Write a function to count the frequency of each element of an array.

#include <stdio.h>
void sortedArray(int a[], int n)
{
    int i, temp, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void countFrequency(int a[], int n)
{
    int count, i, j;
    sortedArray(a, n);
    for (i = 0; i < n;)
    {
        count = 0;
        for (j = i; i < n && a[j] == a[i]; i++)
        {
            count++;
        }
        printf("\n%d -- %d", a[j], count);
    }
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
    printf("Given Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    countFrequency(a, n);
    return 0;
}