// Star Pattern.

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(j<=i){
                printf("%d", j);
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
}