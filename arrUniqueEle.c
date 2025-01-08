#include<stdio.h>
int main(){
	 int a[100],n,i,j,flag,key;
    printf("Enter a N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]){
			for(j=i+1;j<n;j++){
				a[j]=a[j+1];
				n--;
				j--;
		}
		i--;
		}
		
	}
	

    printf("Array elements is : ");
    for(i=0;i<n;i++)
    	printf("%d ",a[i]);
	return 0;
}