// Write a menu driven program with the following options.
// Factorial of a number.
// Check Even and Odd.
// Area of circle.
// Sum of first N natural number.
// Exit.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int choice, num;
        printf("enter 1 for factorial of a number.\n");
        printf("enter 2 for check even or odd.\n");
        printf("enter 3 for area of circle.\n");
        printf("enter 4 for sum of first N natural number.\n");
        printf("enter 5 for exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            int fact = 1;
            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("factorial of given number is %d.\n", fact);
            break;
        }
        case 2:
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("%d, number is even.\n", num);
            }
            else
            {
                printf("%d, number is odd.\n", num);
            }
            break;
        }
        case 3:
        {
            printf("Enter radius of circle : ");
            scanf("%d", &num);
            printf("Area of circle %.2f\n", 3.14 * num * num);
            break;
        }
        case 4:
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            int sum = 0;
            for (int i = 1; i <= num; i++)
            {
                sum = sum + i;
            }
            printf("sum of first %d natural number is %d.\n", num, sum);
            break;
        }
        case 5:
            exit(0);
        default:
            printf("enter valid choice.\n");
            break;
        }
    }
    return 0;
}