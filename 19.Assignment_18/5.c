// Star Pattern.

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        char k = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c", k++);
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