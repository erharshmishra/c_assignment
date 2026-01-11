// Write a program to check whether a given number is prime or not.

#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num<2){
        printf("%d is not a prime number.", num);
    }
    else{
        for (int i = 2; i < num;i++){
            if(num%i==0){
                count = 1;
                break;
            }
        }
        if(count==0){
            printf("%d is a prime number.", num);
        }
        else{
            printf("%d is not a prime number.", num);
        }
    }
    return 0;
}