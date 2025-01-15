#include<stdio.h>
#define MAX 20
int main(){
    int a[MAX],i,j,n;

    //Input size of array
    printf("Enter the value of n : ");
    scanf("%d",&n);

    //Accepting n number of array 
    printf("Enter %d numbers : ",n);

    //Accepting first elements
    scanf("%d",&a[0]);

    //Accepting element from second element
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);

            //loop for checking duplicates
            for(j=0;j<i;j++){
                if(a[j]==a[i]){
                    printf("duplicates not allowed\n");
                    printf("Enter another element\n");
                    i--;
                }
            }
    }

    //printing array elements that has unique elements like set
    printf("Set is : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}