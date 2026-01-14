// Write a menu driven program with the following options.
// Check whether a given set of three numbers are lengths of isosceles triangle or not.
// Check whether a given set of three numbers are lengths of sides of right angled triangle or not.
// Check whether a given set of three numbers are equilateral triangle or not.
// exit.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int a, b, c, choice;
        printf("enter 1 for check isosceles triangle or not.\n");
        printf("enter 2 for check right angled triangle or not.\n");
        printf("enter 3 for check equilateral triangle or not.\n");
        printf("enter 4 for exit.\n");
        printf("enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter three numbers : ");
            scanf("%d%d%d", &a, &b, &c);
            // two sides should be same.
            if (a < b + c && b < c + a && c < a + b)
            {
                if (a == b || b == c || c == a)
                {
                    printf("isosceles triangle.\n");
                }
                else
                {
                    printf("not isosceles triangle.\n");
                }
            }
            else
            {
                printf("not a vaild triangle sides length.\n");
            }
            break;
        }
        case 2:
        {
            printf("Enter three numbers : ");
            scanf("%d%d%d", &a, &b, &c);
            if (a < b + c && b < c + a && c < a + b)
            {
                if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
                {
                    printf("right angled triangle.\n");
                }
                else
                {
                    printf("not right angled triangle.\n");
                }
            }
            else
            {
                printf("not a vaild triangle sides length.\n");
            }
            break;
        }
        case 3:
        {
            printf("Enter three numbers : ");
            scanf("%d%d%d", &a, &b, &c);
            // all sides should be same.
            if (a < b + c && b < c + a && c < a + b)
            {
                if (a == b && b == c)
                {
                    printf("equilateral triangle.\n");
                }
                else
                {
                    printf("not equilateral triangle.\n");
                }
            }
            else
            {
                printf("not a vaild triangle sides length.\n");
            }
            break;
        }
        case 4:
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
