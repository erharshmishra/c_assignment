// Write a program to print MySirG N times on the screen.

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter any number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}