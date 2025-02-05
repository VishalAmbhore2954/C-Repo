#include<stdio.h>
int factorial(int num){
    if(num==0||num==1){
        return 1;
    }
    int fact = num*factorial(num-1);
    return fact;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("%d",fact);
    return 0;
}