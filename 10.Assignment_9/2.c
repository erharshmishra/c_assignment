// Write a program to take marks of 5 subjects from the user.
// Assume marks given out of 100 and passing marks is 33.
// Now display whether the candidate passed the examination or failed.

#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, per;
    printf("Enter the marks for each subject : ");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
    per = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    if (sub1 > 32 && sub2 > 32 && sub3 > 32 && sub4 > 32 && sub5 > 32)
    {
        printf("Candidate passed the examination with %f percentage", per);
    }
    else
    {
        printf("Candidate failed the examination with %f percentage", per);
    }
    return 0;
}