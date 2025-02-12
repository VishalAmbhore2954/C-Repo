#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[20];
    printf("Enter a string : ");
    scanf("%s",str);
    for(i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}