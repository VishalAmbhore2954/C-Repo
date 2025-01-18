#include<stdio.h>
#define MAX 20
int main(){
    int a[MAX],sum[MAX],add,i,n,cnt=0,cnt2;

    //accept size from user
    printf("Enter a N : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    //Accepting n numbers
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //printing actual array
    printf("\nGiven array is\n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }

    //applying main logic
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

        //printing arrays 
        printf("\nPrinting sub arrays\n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }

     //printing result
     printf("\nThe result is\n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
    return 0;
}