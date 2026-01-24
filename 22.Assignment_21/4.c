// Write a function to print first N natural numbers [TSRN].

#include <stdio.h>
void naturalNum(int num);
int main()
{
    int num, numbers;
    printf("Enter a number : ");
    scanf("%d", &num);
    naturalNum(num);
    return 0;
}

void naturalNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}