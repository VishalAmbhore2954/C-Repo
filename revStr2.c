#include<stdio.h>
#include<string.h>

void reverce(char str[]){
    int temp,i,j;
    for(j=strlen(str)-1,i=0;i<strlen(str)/2,j>strlen(str)/2;j--,i++){
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
}

int main(){
    char str[20];
    printf("Enter a string : ");
    scanf("%s",str);
    reverce(str);
    return 0;
}