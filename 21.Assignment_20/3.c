// Write a program to check whether a given chracter is uppercase alphabet or lowercase alphabet or some other special character, using switch statement.

// #include<stdio.h>
// int main(){
//     int choice;
//     char ch;
//     printf("Enter 1 for check uppercase alphabet.\n");
//     printf("Enter 2 for check lowercase alphabet.\n");
//     printf("Enter 3 for check special character.\n");
//     printf("Enter your choice : ");
//     scanf("%d", &choice);
//     // to clear the input buffer.
//     getchar();
//     switch (choice)
//     {
//     case 1:
//        {
//            printf("enter any character : ");
//            scanf("%c", &ch);
//            if (ch >= 'A' && ch<='Z')
//            {
//                printf("given alphabet is in uppercase.");
//            }
//            else
//            {
//                printf("given alphabet is not in uppercase.");
//            }
//            break;
//        }
//     case 2:
//        {
//            printf("enter any character : ");
//            scanf("%c", &ch);
//            if (ch >= 'a' && ch<='z')
//            {
//                printf("given alphabet is in lowercase.");
//            }
//            else
//            {
//                printf("given alphabet is not in lowercase.");
//            }
//            break;
//        }
//     case 3:
//        {
//            printf("enter any character : ");
//            scanf("%c", &ch);
//            if((ch>='a'&&ch<='z') || (ch>='A' && ch<='Z')){
//                printf("not a special character.");
//            }
//            else{
//                printf("a special character.");
//            }

//            break;
//        }

//     default:
//         printf("please enter valid character.");
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a' ... 'z':
        printf("Lower Case");
        break;
    case 'A' ... 'Z':
        printf("Upper Case");
        break;
    default:
        printf("Special Character");
    }
    return 0;
}
