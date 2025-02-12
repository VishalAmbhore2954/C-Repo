#include<stdio.h>
#include<string.h>
int main(){
    int i,cnt=0;
    char str[20],str2[20];
    printf("Enter a string : ");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
            str2[cnt++]=str[i];
    }
    str2[cnt]='\0';
    printf("Original string is %s\n",str);
    printf("Copied string is %s",str2);
    return 0;
}