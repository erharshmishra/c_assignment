// Write a program which takes the cost price and selling price of a product from the user.
// Now calculate and print profit or loss percentage.

#include <stdio.h>
int main()
{
    float cp, sp, pl;
    printf("Enter cp and sp : ");
    scanf("%f%f", &cp, &sp);
    if (sp >= cp)
    {
        pl = sp - cp;
        printf("Profit percentage : %.2f", pl / cp * 100);
    }
    else
    {
        pl = cp - sp;
        printf("Loss percentage : %.2f", pl / cp * 100);
    }
    return 0;
}