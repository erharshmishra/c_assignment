// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

#include <stdio.h>
int findFirstAdjacnetDuplicate(int a[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            return a[i];
        }
    }
    return -1; // If adjacent element is not duplicate.
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
    printf("Adjacent Duplicate Element is : %d", findFirstAdjacnetDuplicate(a, n));
    return 0;
}
