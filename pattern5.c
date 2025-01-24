#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a N : ");
    scanf("%d",&n);
    int min = 0;
    for(i=1;i<=n*2-1;i++){
        for(j=1;j<=n*2-1;j++){
            int a = i;
            if(i>n) a = n*2 - i;
            int b = j;
            if(j>n) b = n*2 - j;
            if(a<b) min = a;
            else min = b;
            printf("%d ",min); 

        }
        printf("\n");
    }
    return 0;
}