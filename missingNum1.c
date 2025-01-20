#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter a N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        if(a[i]+1!=a[i+1]){
            printf("%d is missing",a[i]+1);
        }
    }
    return 0;
}