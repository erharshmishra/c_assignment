// Write a function to print PASCAL triangle [TSRN].

#include <stdio.h>
int comb(int n, int r);
void pascal(int lines)
{
    int i, j, flag, n, r;
    for (i = 1; i <= lines; i++)
    {
        n = i - 1;
        r = 0;
        flag = 1;
        for (j = 1; j <= 2 * lines - 1; j++)
        {
            if (j >= lines + 1 - i && j <= lines - 1 + i)
            {
                if (flag)
                {
                    printf("%d", comb(n, r++));
                }
                else
                {
                    printf(" ");
                }
                flag = 1 - flag;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

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
    pascal(6);
    return 0;
}