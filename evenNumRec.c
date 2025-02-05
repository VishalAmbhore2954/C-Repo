#include<stdio.h>
int evenNum(int num,int n){
    if(n>num){
        return 0;
    }
    printf("%d\n",n);
    n = n+2;
    evenNum(num,n);
}
int main(){
    int num,n=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    evenNum(num,n);
    return 0;
}