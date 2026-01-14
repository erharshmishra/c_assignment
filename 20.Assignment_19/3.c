// Write a program which takes the day number a week and displays a unique greeting message for the day.

#include <stdio.h>
int main()
{
    int num;
    printf("enter 1 for monday.\n");
    printf("enter 2 for tuesday.\n");
    printf("enter 3 for wednesday.\n");
    printf("enter 4 for thursday.\n");
    printf("enter 5 for friday.\n");
    printf("enter 6 for saturday.\n");
    printf("enter 7 for sunday.\n");
    printf("enter any choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
    {
        printf("hi");
        break;
    }
    case 2:
    {
        printf("hey");
        break;
    }
    case 3:
    {
        printf("hello");
        break;
    }
    case 4:
    {
        printf("welcome");
        break;
    }
    case 5:
    {
        printf("hiii");
        break;
    }
    case 6:
    {
        printf("hiiii");
        break;
    }
    case 7:
    {
        printf("helloooo");
        break;
    }
    default:
        printf("enter valid week day number.");
        break;
    }

    return 0;
}