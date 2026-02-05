// Write a function to rotate an array by n positons in d direction.
// The d is an indicative value for left or right.
// For example, if array size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array will be [40, 12, 70, 32, 29].

#include <stdio.h>
void rotate(int a[], int size, int n, int d)
{
    int temp, i, shiftCount;
    // d == +1 (right) | d == -1 (left)
    if (d == 1)
    {
        for (shiftCount = 1; shiftCount <= n; shiftCount++)
        {
            temp = a[size - 1];
            for (i = size - 1; i > 0; i--)
            {
                a[i] = a[i - 1];
            }
            a[i] = temp;
        }
    }
    else if (d == -1)
    {
        for (shiftCount = 1; shiftCount <= n; shiftCount++)
        {
            temp = a[0];
            for (i = 0; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            a[i] = temp;
        }
    }
    printf("After Rotation Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int size, i, n, d;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    int a[size];
    printf("Enter array's elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position and direction : ");
    scanf("%d%d", &n, &d);
    rotate(a, size, n, d);
    return 0;
}