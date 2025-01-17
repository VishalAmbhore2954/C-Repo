#include<stdio.h>
#define MAX 20
int main(){
    int a[MAX],sum[MAX],add,i,n,cnt=0,cnt2;
    printf("Enter a N : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nGiven array is\n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }

    while(n!=2){
        add = 0;
        cnt = 0;
        for(i=0;i<n-1;i++){
            add = a[i] + a[i+1];
            add = add % 10;
            // printf("%d",add);
            sum[cnt++] = add;
        }
        n--;
        for(i=0;i<cnt;i++){
            a[i] = sum[i];
        }

        printf("\nPrinting....\n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
     printf("\nThe result is\n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
    return 0;
}