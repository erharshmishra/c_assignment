// Write a function to print all armstrong numbers between two given numbers [TSRN].

#include <stdio.h>
#include <math.h>
void armstrong(int m, int n);
int main()
{
    int m, n;
    printf("Enter two numbers : ");
    scanf("%d%d", &m, &n);
    armstrong(m, n);
    return 0;
}

void armstrong(int m, int n)
{
    int i, j, temp, temp1, sum, count, power;
    if (m > n)
    {
        int temp_swap = m;
        m = n;
        n = temp_swap;
    }
    for (i = m; i <= n; i++)
    {
        temp = i;
        temp1 = temp;
        count = 0;
        sum = 0;
        while (temp)
        {
            temp = temp / 10;
            count++;
        }
        while (temp1)
        {
            int digit = temp1 % 10;
            power = 1;
            for (int j = 1; j <= count; j++)
            {
                power = power * digit;
            }
            sum = sum + power;
            temp1 = temp1 / 10;
        }
        if (i == sum)
        {
            printf("%d is armstrong.\n", i);
        }
    }
}