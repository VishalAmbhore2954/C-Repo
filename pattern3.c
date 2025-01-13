#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            printf("* ");
        }
        // for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j<i){
                    printf("    ");
                }else
                printf("* ");
            }
            printf("\n");
        // }
    }
}