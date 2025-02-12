#include<stdio.h>
#include<string.h>
void removDup(char name[]){
    int i,j,k,length = strlen(name);
    for(i=0;i<length;i++){
        for(j=i+1;j<length;j++){
            if(name[i]==name[j]){
                for(k=j;k<length;k++){
                    name[k]=name[k+1];
                }
                name[k] = '\0';
                length--;
                j--;
            }
        }
    }
}

int main(){
    char name[20];
    printf("Enter a String : ");
    scanf("%s",name);
    printf("oroginal string is : %s\n",name);
    removDup(name);
    printf("after removing duplicats string is : %s",name);
    return 0;
}