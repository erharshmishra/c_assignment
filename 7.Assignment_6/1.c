// Assume price of 1 USD in INR 84.23.
// Write a program to take amount in INR and convert it into USD.

#include <stdio.h>
int main()
{
    float INR, USD;
    printf("Enter INR : ");
    scanf("%f", &INR);
    USD = INR / 84.23;
    printf("USD : %f", USD);
    return 0;
}