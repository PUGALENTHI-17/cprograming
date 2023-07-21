#include <stdio.h>
int main()
{
    int rowCount,columnCount,i,j;
    int A[10][10],B[10][10],C[10][10];
    printf("Number of rows of matrix : ");
    scanf("%d", &rowCount);
    printf("Number of columns of matrix: ");
    scanf("%d", &columnCount);
    printf("Elements of matrix A :\t\n");
    for ( i = 0; i < rowCount; i++)
        {
        for ( j = 0; j < columnCount; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Elements of matrix B :\t\n");
    for ( i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
            {
            scanf("%d", &B[i][j]);
            }
    }
    printf("Difference of matrix C : \t\n");
    for ( i = 0; i < rowCount; i++)
    {
        for ( j = 0; j < columnCount; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
