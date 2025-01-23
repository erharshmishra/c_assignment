// Write a program to ask user about the cost price and selling price banana per dozen.
// Calculate the profit or loss earned upon selling 25 bananas.

#include <stdio.h>
int main()
{
    float cp, sp, pl;
    printf("Enter the cost & selling price : ");
    scanf("%f %f", &cp, &sp);
    pl = (sp - cp) / 12 * 25;
    printf("Profit or loss is : %f", pl);
    return 0;
}