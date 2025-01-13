#include<stdio.h>
int main(){
    int i,j,k;
    int n,st;
    n=5;
    st=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(k=1;k<=st;k++){
            printf("* ");
        }
        printf("\n");
        st=st+2;
        printf("\n");
    }
    st=(n*2)-1;
    st=st-2;
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(k=1;k<=st;k++){
            printf("* ");
        }
        printf("\n");
        st=st-2;
        printf("\n");
    }
    return 0;
}