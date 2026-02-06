// Write a function to count a total number of duplicate elements in an array.

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

int countDuplicate(int a[], int n)
{
    int dup = 0, i, j;
    sortedArray(a, n);
    for (i = 0; i < n - 1;)
    {
        if (a[i] == a[i + 1])
        {
            dup++;
            for (j = i; i < n && a[j] == a[i]; i++)
                ;
        }
        else
        {
            i++;
        }
    }
    printf("\nNumber of duplicate elements : %d", dup);
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
    countDuplicate(a, n);
    return 0;
}