#include<stdio.h>
#include<string.h>

void reverce(char str[]){
    int temp,i,j,cnt=0;
    for(j=strlen(str)-1,i=0;i<strlen(str)/2,j>strlen(str)/2;j--,i++){
        if(str[i]!=str[j]){
            cnt++;
            break;
        }
    }
    if(cnt!=0){
        printf("not palindrome");
    }else{
        printf("palindrome");
    }
}

int main(){
    char str[20];
    printf("Enter a string : ");
    scanf("%s",str);
    reverce(str);
    return 0;
}