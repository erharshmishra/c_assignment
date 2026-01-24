// Write a function to calculate simple interest [TSRS].

#include <stdio.h>
float simInterest(int p, float r, int t);
int main()
{
    int p, t;
    float r, si;
    printf("enter the value of p,r and t : ");
    scanf("%d%f%d", &p, &r, &t);
    si = simInterest(p, r, t);
    printf("simple interest is %.2f", si);
    return 0;
}

float simInterest(int p, float r, int t)
{
    float si;
    si = (p * r * t) / 100;
    return si;
}