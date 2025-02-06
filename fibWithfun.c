#include<stdio.h>

void fib(int num){
    int a=0,b=1,next;
    for(int i=1;i<=num;i++){
        printf("%d\t",a);
        next = a+b;
        a=b;
        b=next;
    }
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    fib(num);
    return 0;
}