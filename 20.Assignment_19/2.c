// Write a menu driven program with the following options.
// Addition.
// Subtraction.
// Multiplication.
// Division.
// Exit.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, choice;
    while (1)
    {
        printf("Enter your choice from list [ add=1,sub=2,mul=3,div=4,exit=5] use numeric value : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter two number : ");
            scanf("%d%d", &num1, &num2);
            printf("Sum of %d and %d is : %d\n", num1, num2, num1 + num2);
            break;
        }
        case 2:
        {
            printf("Enter two number : ");
            scanf("%d%d", &num1, &num2);
            printf("Sub of %d and %d is : %d\n", num1, num2, num1 - num2);
            break;
        }
        case 3:
        {
            printf("Enter two number : ");
            scanf("%d%d", &num1, &num2);
            printf("Mul of %d and %d is : %d\n", num1, num2, num1 * num2);
            break;
        }
        case 4:
        {
            printf("Enter two number : ");
            scanf("%d%d", &num1, &num2);
            printf("Div of %d and %d is : %d\n", num1, num2, num1 / num2);
            break;
        }
        case 5:
        {
            exit(0);
        }

        default:
            printf("enter valid choice.\n");
            break;
        }
    }

    return 0;
}