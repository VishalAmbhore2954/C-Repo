#include<stdio.h>
int main(){
    int n,i,sum=0; 
    printf("enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of all even numbers is : %d",sum);
    return 0;
}