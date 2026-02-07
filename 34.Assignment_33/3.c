// Write a program to print the transpose of a given matrix.

#include <stdio.h>
int main()
{
    int a[3][3], i, j, temp, k;
    printf("Enter 9 numbers of matrix 3x3 : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nGiven matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0, j = 1, k = 1; k <= 3; k++)
    {
        temp = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = temp;
        if (j - i == 1)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    // temp = a[0][1];
    // a[0][1] = a[1][0];
    // a[1][0] = temp;
    // temp= a[0][2];
    // a[0][2] = a[2][0];
    // a[2][0] = temp;
    // temp = a[1][2];
    // a[1][2] = a[2][1];
    // a[2][1] = temp;
    printf("\nTranspose of matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
