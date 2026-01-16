// Write a progam to check whether a given character is vowel or consonant or some other special character, using switch case statement.

#include <stdio.h>
int main()
{
    int choice;
    char ch;
    printf("Enter 1 for check vowel\n");
    printf("Enter 2 for check consonant\n");
    printf("Enter 3 for check special character.\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    // to clear the input buffer.
    getchar();
    switch (choice)
    {
    case 1:
    {
        printf("enter any character : ");
        scanf("%c", &ch);
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            printf("given alphabet is vowel.");
        }
        else
        {
            printf("given alphabet is not vowel.");
        }
        break;
    }
    case 2:
    {
        printf("enter any character : ");
        scanf("%c", &ch);
        if (ch != 'a' && ch != 'A' && ch != 'e' && ch != 'E' && ch != 'i' && ch != 'I' && ch != 'o' && ch != 'O' && ch != 'u' && ch != 'U')
        {
            printf("given alphabet is consonant.");
        }
        else
        {
            printf("given alphabet is not consonant.");
        }
        break;
    }

    case 3:
    {
        printf("enter any character : ");
        scanf("%c", &ch);
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("not a special character.");
        }
        else
        {
            printf("a special character.");
        }

        break;
    }

    default:
        printf("please enter valid character.");
        break;
    }
    return 0;
}
