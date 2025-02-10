// Write a program with one char type variable.
// Assign 'A' in the variable.
// Now change the value of variable from 'A' to 'B' using increment operater.

#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("%c", ++ch);
    return 0;
}