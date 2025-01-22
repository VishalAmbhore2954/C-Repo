#include <stdio.h>
#define MAX 50
int main()
{
    int i, j, r1, r2, c1, c2, a[MAX][MAX], b[MAX][MAX], add[MAX][MAX];

    printf("Enter a size of 1st matrix row : ");
    scanf("%d", &r1);

    printf("Enter a size of 1st matrix coloun : ");
    scanf("%d", &c1);

    printf("Enter 1st matrix elements\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter a size of 2nd matrix row : ");
    scanf("%d", &r2);

    printf("Enter a size of 2nd matrix coloun : ");
    scanf("%d", &c2);

    printf("Enter 2nd matrix elements\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (r1 == r2 && c1 == c2)
    {

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                add[i][j] = a[i][j] + b[i][j];
            }
        }
    }

    printf("1st matrix is\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }

    printf("2nd matrix is\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }

    printf("Addition of matrix is\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%3d", add[i][j]);
        }
        printf("\n");
    }
}