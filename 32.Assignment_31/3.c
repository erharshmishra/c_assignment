// Write a function to sort an array of any size [TSRN].

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
    sortedArray(a, n);
    return 0;
}