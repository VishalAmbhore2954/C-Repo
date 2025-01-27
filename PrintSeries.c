#include<stdio.h>

int power(int x,int y){
    int val = 1,i;
    for(i=0;i<y;i++){
        val = val * x;
    }
    return val;
}

int main(){
    int term,a,b,i;
    printf("Enter terms : ");
    scanf("%d",&term);
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);

    int val = 0;
    for(i=0;i<term;i++){
        if(i==0){
            val = a + (power(2,i) * b);
        }else{
            val = val + (power(2,i) * b);
        }
        printf("%d ",val);
    }
    return 0;
}