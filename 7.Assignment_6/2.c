// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>
int main()
{
    int num, a;
    printf("Enter 3-digits number : ");
    scanf("%d", &num);
    a = num % 10 * 100 + num / 10;
    printf("After rotation : %d", a);
    return 0;
}