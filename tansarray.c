#include<stdio.h>


// void multiply(int arr1[row][col],int arr2[row][col]);

int main (){
      
    int row ,col ;
    int X;
    int ans[row][col];
    printf("Enter Number of Rows :");
    scanf("%d",&row);
    printf("Enter number of coloumn:");
    scanf("%d",&col);
    int arr[row][col];
    int trans[row][col];
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // printf("Enter Element %d %d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

        for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            trans[i][j]=arr[j][i];
        }
    } 
    printf("Tranpose\n");
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",trans[i][j]);
        }
         printf("\n");

    } 
    printf("Multiply\n");
    
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<col;k++){
            ans[i][j] = ans[i][j]+arr[i][k]*trans[k][j];
            }
        }
    }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");

}

    scanf("%d",&X);

    // multiply(arr[row][col],trans[row][col]);
}

// void multiply(int arr1[row][col],int arr2[row][col]){
//     int ans[row][col];
//     for (int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             for(int k=0;k<col;k++){
//             ans[i][j] = ans[i][j]+arr1[i][k]*arr2[k][j];
//             }
//         }
//     }
//     for (int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("%d",ans[i][j]);
//         }
//         printf("\n");
// }
// }