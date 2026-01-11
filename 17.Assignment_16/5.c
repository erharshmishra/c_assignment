// Write a program to check whether a given number is an armstrong number or not.

#include<stdio.h>
int main(){
    int num, count = 0,temp,sum=0,num1,num2,i,p;
    printf("Enter a number : ");
    scanf("%d", &num);
    num1 = num;
    num2 = num;
    while (num1)
    {
        num1 = num1 / 10;
        count++;
    }
    while (num2)
        {
            temp = num2 % 10;
            p = 1;
            for (i = 1; i <= count;i++){
                p = p * temp;
            }
            sum = sum + p;
            num2 = num2 / 10;
        }
    if(num == sum){
        printf("%d is an armstrong number.", num);
    }
    else{
        printf("%d is not an armstrong number.", num);
    }
    
    return 0;

}