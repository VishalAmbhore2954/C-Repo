#include<stdio.h>
#define MAX 20
int main(){
    int a[MAX],n,i,j,temp;
    printf("Enter a size of array : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]==0){
            temp = a[i];
            for(j=i;j<n;j++){
                a[j] = a[j+1];
            }
            a[n-1] = temp;
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}