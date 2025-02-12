#include<stdio.h>
#include<string.h>
int main(){
    int i,cnt=0;
    char str[20],str2[20];
    printf("Enter a string : ");
    scanf("%s",str);
    for(i=strlen(str)-1;i>=0;i--){
        if(i>=0){
            str2[cnt++] = str[i];
        }else{
            str2[cnt++] = '\0';
        }
    }
    if(str2==str){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}