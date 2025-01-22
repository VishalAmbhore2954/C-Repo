#include<stdio.h>
#define MAX 50
int main(){
    int i,j,a[MAX][MAX],c,r;
    printf("Enter a size of row : ");
    scanf("%d",&r);
    printf("Enter a size of coloum : ");
    scanf("%d",&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%3d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}