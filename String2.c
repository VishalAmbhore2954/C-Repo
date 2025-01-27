#include <stdio.h>
int main()
{
    int roll[100], n, i;
    float marks[100];
    char name[100][100], div[10][10], mobile[10][10], address[50][50];
    printf("How many students data you wants to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Student roll no : ");
        scanf("%d", &roll[i]);
        printf("Enter student name : ");
        gets(name[i]);
        gets(name[i]);

        // scanf("%s",name);
        printf("Enter division : ");
        scanf("%s", div[i]);
        // printf("\n%s\n",div);
        // scanf("%s",div);
        printf("Enter student marks : ");
        scanf("%f", &marks[i]);
        printf("Enter Mobile no : ");
        scanf("%s", mobile[i]);
        printf("Enter Address : ");
        scanf("%s", address[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\n\n----------------------STUDENT DATA-------------------------\n");
        printf("\nRoll no\t\t\t:\t%d", roll[i]);
        printf("\nName\t\t\t:\t%s", name[i]);
        printf("\nDivision\t\t:\t%s", div[i]);
        printf("\nMarks\t\t\t:\t%f", marks[i]);
        printf("\nMobile No\t\t:\t%s", mobile[i]);
        printf("\nAddress\t\t\t:\t%s", address[i]);
        printf("\n----------------------THANK TOU-----------------------------\n");
    }
    return 0;
}