#include<stdio.h>
int main(){
    int n,i,j,sum=0,cnt; 
    printf("enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        cnt=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==2){
            sum+=i;
        }
    }
    printf("Sum of all prime numbers is : %d",sum);
    return 0;
}