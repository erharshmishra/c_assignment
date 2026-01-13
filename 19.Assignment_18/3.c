// Star Pattern.

#include <stdio.h>
int main()
{
    int i, j, flag;
    for (i = 1; i <= 4; i++)
    {
        flag = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (flag)
                {
                    printf("*");
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
    return 0;
}
