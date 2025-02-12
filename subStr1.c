#include<stdio.h>
#include<string.h>
int main(){
    int start,len,i;
    char name[20];
    printf("Enter a String : ");
    scanf("%s",name);
    printf("Enter a start point : ");
    scanf("%d",&start);
    printf("Enter a length : ");
    scanf("%d",&len);
    for(i=start-1;i<strlen(name)&&i<(start-1)+len;i++){
        printf("%c",name[i]);
    }
    return 0;
}