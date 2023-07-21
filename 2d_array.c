#include<stdio.h>

int main (){
    int row ,col;
    
    printf("Enter Number of Rows :");
    scanf("%d",&row);
    printf("Enter number of coloumn:");
    scanf("%d",&col);
    int arr[row][col];
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter Element %d %d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    // for (int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");

    // }

        for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");

    }
}