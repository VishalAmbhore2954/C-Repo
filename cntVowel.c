#include<stdio.h>
int main(){
    int i,vowel=0,con=0;
    char name[20];
    printf("Enter a name : ");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            vowel++;
        }else{
            con++;
        }
    }
    printf("%d vowels present in string\n",vowel);
    printf("And \n%d Consonenets present in string",con);
    return 0;
}