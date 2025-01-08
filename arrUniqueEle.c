#include<stdio.h>
int main(){
    int arr[100],n,i,j,k;
    printf("Enter a N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(k=0;k<n;k++){
    	for(i=k+1;i<n;i++){
        if(arr[k]==arr[i]){
            for(j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            n--;
            j--;
            i--;
        }
    }
	}

    printf("Array element is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
