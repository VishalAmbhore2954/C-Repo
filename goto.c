#include<stdio.h>
int main(){
    int a = 1;
    menu:
    printf("%d\n",a++);
    if(a<11){
        goto menu;
    }
    return 0;
}