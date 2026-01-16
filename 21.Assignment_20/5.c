// Write a menu driven program with the following options.
// Calculate LCM of two number.
// Calculate sum of the digits of a number.
// Volume of a cuboid.
// Check whether a given number is prime or not.
// Exit.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int choice, num1, num2, num3;
        printf("enter 1 for calculate LCM of two number.\n");
        printf("enter 2 for calculate sum of the digits of a number.\n");
        printf("enter 3 for volume of a cuboid.\n");
        printf("enter 4 for check whether a given number is prime or not.\n");
        printf("enter 5 for exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter two numbers : ");
            scanf("%d%d", &num1, &num2);
            int LCM = num1 > num2 ? num1 : num2;
            for (int i = LCM; i <= num1 * num2; LCM++)
            {
                if (LCM % num1 == 0 && LCM % num2 == 0)
                {
                    break;
                }
            }
            printf("LCM is %d.\n", LCM);
            break;
        }
        case 2:
        {
            printf("Enter a number : ");
            scanf("%d", &num1);
            int sum = 0;
            while (num1)
            {
                sum = sum + num1 % 10;
                num1 = num1 / 10;
            }
            printf("Sum is %d.\n", sum);
            break;
        }
        case 3:
        {
            float l, w, h;
            printf("Enter a length,width and height : ");
            scanf("%f%f%f", &l, &w, &h);
            float vol;
            vol = l * w * h;
            printf("Volume of cuboid is %.2f.\n", vol);
            break;
        }
        case 4:
        {
            int num, count = 0;
            printf("Enter a number : ");
            scanf("%d", &num);
            if (num < 2)
            {
                printf("given number is not a prime number.\n");
            }
            else
            {
                for (int i = 2; i < num; i++)
                {
                    if (num % i == 0)
                    {
                        count = 1;
                        break;
                    }
                }
                if (count == 0)
                {
                    printf("given number is a prime number.\n");
                }
                else
                {
                    printf("given number is not a prime number.\n");
                }
            }

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