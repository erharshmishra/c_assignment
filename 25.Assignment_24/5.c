// Write a function to find the sum of first N terms of the series [TSRS].

#include <stdio.h>
#include <math.h>
int sum(int m);
int main()
{
    int m, a;
    printf("Enter two numbers : ");
    scanf("%d", &m);
    a = sum(m);
    printf("%d", a);
    return 0;
}

int sum(int m)
{
    int res = 0;
    for (int i = 1; i <= m; i++)
    {
        res = res + i;
    }
    return res;
}