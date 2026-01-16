// Write a program to find and display grade obtained by a student in a test.
// Grading specifications are as follows.
// Marks from 90 to 100 : Grade A.
// Marks from 80 to less than 90 : Grade B.
// Marks from 70 to less than 80 : Grade C.
// Marks from 60 to less than 70 : Grade D.
// Marks from 50 to less than 60 : Grade E.
// Marks below 50 : Grade F.
// Marks greater than 100 or less than 0 : Invalid.

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter your marks : ");
//     scanf("%d", &num);
//     if(num>=90 && num <=100){
//         printf("%d marks and Grade A", num);
//     }
//     else if(num>=80 && num <90){
//         printf("%d marks and Grade B", num);
//     }
//     else if(num>=70 && num <80){
//         printf("%d marks and Grade C", num);
//     }
//     else if(num>=60 && num <70){
//         printf("%d marks and Grade D", num);
//     }
//     else if(num>=50 && num <60){
//         printf("%d marks and Grade E", num);
//     }
//     else if(num<50&&num>=0){
//         printf("%d marks and Grade F", num);
//     }
//     else {
//         printf("Invalid marks");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int num;
    printf("Enter your marks : ");
    scanf("%d", &num);
    switch (num)
    {
    case 90 ... 100:
        printf("Grade A");
        break;
    case 80 ... 89:
        printf("Grade B");
        break;
    case 70 ... 79:
        printf("Grade C");
        break;
    case 60 ... 69:
        printf("Grade D");
        break;
    case 50 ... 59:
        printf("Grade E");
        break;
    case 0 ... 49:
        printf("Grade F");
        break;
    default:
        printf("Invalid Marks");
    }
    return 0;
}
