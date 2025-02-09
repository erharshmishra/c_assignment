// Write a program to input three characters from the user.
// Display characters with their corresponding ASCII codes.

#include <stdio.h>
int main()
{
    char a, b, c;
    printf("Enter three characters : ");
    scanf("%c %c %c", &a, &b, &c);
    printf("%c = %d, %c = %d, %c = %d", a, a, b, b, c, c);
    return 0;
}
