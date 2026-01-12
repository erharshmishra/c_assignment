// Star Pattern.

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char k = 64+i;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                printf("%c",k++);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}