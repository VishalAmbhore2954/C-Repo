#include<stdio.h>
#include<stdlib.h>
void fun1(int num,int *arr){
    int i,sum=0;
    char g;
    // printf("Enter %d elements : ",num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    // printf("Enter gender : ");
    scanf("%s",&g);

    if(g=='b'){
        for(i=0;i<num;i++){
            if(i%2==0){
                sum+=arr[i];
            }
        }
    }
    if(g=='g'){
        for(i=0;i<num;i++){
            if(i%2!=0){
                sum+=arr[i];
            }
        }
    }
    printf("%d",sum);
}

int main(){
    int n,*arr;
    // printf("Enter the number of students : ");
    scanf("%d",&n);

    arr = (int*)calloc(n,sizeof(int));
    fun1(n,arr);
}