#include<stdio.h>
int main(){
    int i,j,add=0,r,c,a[100][100],add1[100],cnt=0;
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
            add = add+a[j][i];
        }
        add1[cnt++] = add;
        for(j=0;j<c;j++){
            printf("%3d",a[i][j]);
        }
        // printf("%3d",add);
        printf("\n");
    }
    for(i=0;i<cnt;i++)
        printf("%3d",add1[i]);
}