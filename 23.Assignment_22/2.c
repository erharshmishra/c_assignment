// Write a function to calculate the number of combinations one can make from n items and r selected at a time [TSRS].

#include <stdio.h>
int comb(int n, int r)
{
    int i, j, k, a = 1, b = 1, c = 1;
    for (i = 1; i <= n; i++)
    {
        a = a * i;
    }
    for (j = 1; j <= r; j++)
    {
        b = b * j;
    }
    for (k = 1; k <= n - r; k++)
    {
        c = c * k;
    }
    return a / (b * c);
}

int main()
{
    int n, r, combination;
    printf("Enter total items : ");
    scanf("%d", &n);
    printf("Enter selected items : ");
    scanf("%d", &r);
    combination = comb(n, r);
    printf("%d items selected from %d so total %d combinations possible", r, n, combination);
    return 0;
}
