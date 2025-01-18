#include<stdio.h>
int main(){
    int i,j,n,a[10][10];
    printf("Enter a value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        } 
        printf("\n");
    }

    for(i=0;i<n;i++){
       for(j=n-1;j>=0;j--){
            printf("%d\t",a[j][i]);
        } 
        printf("\n");
    }
    return 0;
}