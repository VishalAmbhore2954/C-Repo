#include<stdio.h>
int main(){
    int roll,n;
    float marks;
    char name[100][100],div[10][10],mobile[10][10],address[50][50];
    printf("Enter Student roll no : ");
    scanf("%d",&roll);
    printf("Enter student name : ");
    gets(name);
    gets(name);
    
    // scanf("%s",name);
    printf("Enter division : ");
    scanf("%s",div);
    // printf("\n%s\n",div);
    // scanf("%s",div);
    printf("Enter student marks : ");
    scanf("%f",&marks);
    printf("Enter Mobile no : ");
    scanf("%s",mobile);
    printf("Enter Address : ");
    scanf("%s",address);

    printf("----------------------STUDENT DATA-------------------------");
    printf("\nRoll no\t\t\t:\t%d",roll);
    printf("\nName\t\t\t:\t%s",name);
    printf("\nDivision\t\t:\t%s",div);
    printf("\nMarks\t\t\t:\t%f",marks);
    printf("\nMobile No\t\t:\t%s",mobile);
    printf("\nAddress\t\t\t:\t%s",address);
    printf("\n----------------------THANK TOU-----------------------------");
    return 0;
}