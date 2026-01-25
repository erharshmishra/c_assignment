// Write a function to calculate the factorial of a number [TSRS].

#include <stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int res = fact(num);
    printf("%d", res);
    return 0;
}

int fact(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}