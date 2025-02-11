// Write a program to make the last digit of a number stored in a variable as zero.
// For example if x = 2345 then make it 2340.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    num = num / 10 * 10;
    printf("%d", num);
    return 0;
}