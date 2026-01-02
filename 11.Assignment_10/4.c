// Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the month number : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Month : January & Days : 31");
    }
    else if (num == 2)
    {
        printf("Month : February & Days : 28");
    }
    else if (num == 3)
    {
        printf("Month : March & Days : 31");
    }
    else if (num == 4)
    {
        printf("Month : April & Days : 30");
    }
    else if (num == 5)
    {
        printf("Month : May & Days : 31");
    }
    else if (num == 6)
    {
        printf("Month : June & Days : 30");
    }
    else if (num == 7)
    {
        printf("Month : July & Days : 31");
    }
    else if (num == 8)
    {
        printf("Month : August & Days : 31");
    }
    else if (num == 9)
    {
        printf("Month : September & Days : 30");
    }
    else if (num == 10)
    {
        printf("Month : October & Days : 31");
    }
    else if (num == 11)
    {
        printf("Month : November & Days : 30");
    }
    else if (num == 12)
    {
        printf("Month : December & Days : 31");
    }
    else
    {
        printf("Invalid month number.");
    }
    return 0;
}