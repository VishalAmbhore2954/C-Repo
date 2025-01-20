#include<stdio.h>
int main(){
    int arr[100],n,i,j,temp=0,cnt=0;
    printf("Enter a N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nResult is :\n");
    for(i=1;i<=n;i++){
        cnt++;
        for(j=n-i;j<n;j++){
            cnt++;
            printf("%d ",arr[j]);
        }
        for(j=0;j<n-i;j++){
            // cnt++;
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
}