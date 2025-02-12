#include<stdio.h>
int main(){
    int i;
    char name[20];
    printf("Enter a name : ");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++);
    printf("Length is : %d",i);
    return 0;
}