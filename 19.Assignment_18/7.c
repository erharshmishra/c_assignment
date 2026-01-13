// Star Pattern.

#include <stdio.h>
int main()
{
    int i, j, flag, k;
    for (i = 1; i <= 5; i++)
    {
        k = 1;
        flag = 1;
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                if (flag)
                {
                    printf("%d", k);
                    j < 5 ? k++ : k--;
                }
                else
                {
                    printf(" ");
                    if (j == 5)
                    {
                        k--;
                    }
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
    return 0;
}
