#include<stdio.h>
int printNum(int n){
    if(n==0){
        return 0;
    }
    printf("%d\n",n--);
    printNum(n);
}
int main(){
    int n = 10;
    printNum(n);
    return 0;
}