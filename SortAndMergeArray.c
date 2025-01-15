#include<stdio.h>
#define MAX 20
int main(){
	int arr1[MAX],arr2[MAX], merge[MAX],temp,i,n1,n2,j,k,size=0,cnt=0;
	printf("Enter Array 1 size : ");
	scanf("%d",&n1);
	
	size += n1;
	printf("Enter %d numbers : \n",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Array 2 size : ");
	scanf("%d",&n2);
	
	size += n2;
	printf("Enter %d numbers : \n",n2);
	for(i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	
	//for total no. of iterations
	for(k=0;k<size;k++){
		
			//for sorting first array
			for(j=0;j<n1-1;j++){
				if(arr1[j]>arr1[j+1]){
					temp = arr1[j];
					arr1[j] = arr1[j+1];
					arr1[j+1] = temp;
				}
			}
		
			//comparing array 1 element to second one
			if(arr1[n1-1]>arr2[0]){
				temp = arr2[0];
				arr2[0] = arr1[n1-1];
				arr1[n1-1] = temp;
			}
		
		//for sorting second array
			for(j=0;j<n2-1;j++){
				if(arr2[j]>arr2[j+1]){
					temp = arr2[j];
					arr2[j] = arr2[j+1];
					arr2[j+1] = temp;
				}
			}
	}

	//for merging two arrays
	//for copy first array
	for(i=0;i<n1;i++){
		merge[cnt++] = arr1[i];
	}

	//for copy second array
	for(i=0;i<n2;i++){
		merge[cnt++] = arr2[i];
	}	

	//printing array
	for(i=0;i<cnt;i++){
		printf("%d ",merge[i]);
	}
	
	return 0;
}
