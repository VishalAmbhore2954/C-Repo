#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    int i;
    printf("Enter a string : ");
    scanf("%s",name);
    for(i=0;i<strlen(name);i++){
        if(name[i]>=97&&name[i]<=122){
            printf("%c",name[i]-32);
        }else{
            printf("%c",name[i]);
        }
    }
    // printf("%d",'z');
}