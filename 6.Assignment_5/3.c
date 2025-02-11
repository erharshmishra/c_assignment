// Write a program to print size of an int, a float, a char and a double type variable.

#include <stdio.h>
int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    printf("%d", sizeof(double));
    return 0;
}