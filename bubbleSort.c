#include<stdio.h>
int main(){
    int a[100],N,i,j,temp;
    
    printf("Enter a size of array : ");
    scanf("%d",&N);

    printf("Enter %d elements",N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<N-1;i++){
        for(j=0;j<N-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Array After sorting :");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
}