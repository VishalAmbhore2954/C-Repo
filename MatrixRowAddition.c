#include<stdio.h>
int main(){
    int i,j,add=0,r,c,a[100][100];
    printf("Enter size of row : ");
    scanf("%d",&r);
    printf("Enter size of coloumn : ");
    scanf("%d",&c);

    printf("Enter %d elements in matrix ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("printing matrix with row addition :\n");
    for(i=0;i<r;i++){
        add = 0;
        for(j=0;j<c;j++){
            add = add+a[i][j];
        }
        for(j=0;j<c;j++){
            printf("%3d",a[i][j]);
        }
        printf("%5d",add);
        printf("\n");
    }
}