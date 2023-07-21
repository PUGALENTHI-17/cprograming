#include <stdio.h>

int main()
{   
    int row,col;
    int i,j;
    int A[10][10],B[10][10],C[10][10];
    printf("Number of rows of matrix : ");
    scanf("%d", &row);
    printf("Number of columns of matrix: ");
    scanf("%d", &col);
    printf("Elements of matrix A :\t\n");
    for ( i = 0; i < row; i++)
        {
        for ( j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Elements of matrix B :\t\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
            {
            scanf("%d", &B[i][j]);
            }
    }
    printf("Sum of matrix C : \t\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

