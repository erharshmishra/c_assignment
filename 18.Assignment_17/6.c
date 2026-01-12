// Star Pattern.

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int k=i;
        for (int j = 1; j <= 4; j++)
        {
           if(j<=i){
               printf("%d", k--);
           }
           else{
               printf(" ");
           }
        }

        printf("\n");
    }
}