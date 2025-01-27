#include<stdio.h>
int power(int x,int y){
    int val = 1,i;
    for(i=0;i<y;i++){
        val = val * x;
    }
    printf("%d power %d is : %d",x,y,val);
}
int main(){
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the power of number : ");
    scanf("%d",&n);
    power(num,n);
    return 0;
}