#include<stdio.h>
#define MAX 20
int main(){
	int arr1[MAX],arr2[MAX], merge[MAX],i,n1,n2,j,cnt=0;
	printf("Enter Array 1 size : ");
	scanf("%d",&n1);
	
	printf("Enter %d numbers : \n",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Array 2 size : ");
	scanf("%d",&n2);
	
	printf("Enter %d numbers : \n",n2);
	for(i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}

    for(i=0;i<n1;i++){
        for(j=0;j<n1-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    for(i=0;i<n2;i++){
        for(j=0;j<n2-i-1;j++){
            if(arr2[j]>arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }

    i=0;
    j=0;
    while(i<n1&&j<n2){
        if(arr1[i]>arr2[j]){
            merge[cnt++] = arr2[j];
            j++;
        }else if(arr1[i]<arr2[j]){
            merge[cnt++] = arr1[i];
            i++;
        }else{
            merge[cnt++] = arr1[i];
            i++;
            merge[cnt++] = arr2[j];
            j++;
        }
    }

    while(i<n1){
        merge[cnt++] = arr1[i];
        i++;
    }

    while(j<n2){
        merge[cnt++] = arr2[j];
        j++;
    }

    printf("Array after sorting and merging \n");
    for(i=0;i<cnt;i++){
        printf("%d ",merge[i]);
    }
}
