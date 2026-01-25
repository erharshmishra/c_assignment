// Write a function to calculate the number of arrangement one can make from n items and r selected at a time [TSRS].

#include <stdio.h>
int arrange(int n, int r)
{
    int i, k, a = 1, c = 1;
    for (i = 1; i <= n; i++)
    {
        a = a * i;
    }
    for (k = 1; k <= n - r; k++)
    {
        c = c * k;
    }
    return a / c;
}

int main()
{
    int n, r, arrangements;
    printf("Enter total items : ");
    scanf("%d", &n);
    printf("Enter selected items : ");
    scanf("%d", &r);
    arrangements = arrange(n, r);
    printf("%d items selected from %d so total %d arrangements possible", r, n, arrangements);
    return 0;
}