#include<stdio.h>
int main(){
    int i,j,pivot,temp,min;
    int a[] = {5,8,3,1,7,9};

    for(i=0;i<4;i++){
        min = a[i];
        pivot = i;
        for(j=i+1;j<5;j++){
            if(min>a[j]){
                min = a[j];
                pivot = j;
            }
        }
        temp = a[pivot];
        a[pivot] = a[i];
        a[i] = temp;
    }
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}