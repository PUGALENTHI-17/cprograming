#include <stdio.h>
#include<stdlib.h>


void get_ele(int matrix[][10], int row, int column);
void add(int A[][10],int B[][10],int res[][10],int r1, int c1, int r2, int c2);
void sub(int A[][10],int B[][10],int res[][10],int r1, int c1, int r2, int c2);
void mul(int A[][10],int B[][10],int res[][10],int r1, int c1, int r2, int c2);
void transpose(int A[][10],int r1,int c1);


void display(int res[][10], int row, int column);


int main() {
    
   int A[10][10], B[10][10], res[10][10],r1, c1, r2, c2,ch;
   printf("Enter rows and column for the A matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the B matrix: ");
   scanf("%d %d", &r2, &c2);


   while (c1 != r2) {
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the A matrix: ");
      scanf("%d %d", &r1, &c1);
      printf("Enter rows and columns for the B matrix: ");
      scanf("%d %d", &r2, &c2);
   }

    get_ele(A, r1, c1);

    get_ele(B, r2, c2);

    while (1)
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            add(A, B, res, r1, c1, r2, c2);
            display(res, r1, c2);
            break;
            case 2:
            sub(A, B, res, r1, c1, r2, c2);
            display(res, r1, c2);
            break;
            case 3:
            mul(A, B, res, r1, c1, r2, c2);
            display(res, r1, c2);
            break;
            case 4:
            transpose(A,r1, c1);
            break;
            case 5:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 

//    display(res, r1, c2);

   return 0;
}

void get_ele(int matrix[][10], int row, int column) {

   printf("\nEnter elements: \n");

   for (int i = 0; i < row; i++) {
      for (int j = 0; j < column; j++) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}

void display(int res[][10], int row, int column) {

   printf("\nOutput Matrix:\n");
   for (int i = 0; i < row; i++) {
      for (int j = 0; j < column; j++) {
         printf("%d  ", res[i][j]);
         
      }
      printf("\n");
   }
   printf("\n");
}

void add(int A[][10],int B[][10],int res[][10],int r1, int c1, int r2, int c2){

   for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
         res[i][j] =A[i][j] + B[i][j] ;
      }
   }
//    display(res, r1, c2);
}

void sub(int A[][10],int B[][10],int res[][10],int r1, int c1, int r2, int c2){

   for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
         res[i][j] =A[i][j] - B[i][j] ;
      }
   }
//    display(res, r1, c2);
}

void mul(int A[][10],int B[][10],int res[][10],int r1, int c1, int r2, int c2) {


   for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
         res[i][j] = 0;
      }
   }

   for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
         for (int k = 0; k < c1; k++) {
            res[i][j] += A[i][k] * B[k][j];
         }
      }
   }
//    display(res, r1, c2);
}

void transpose(int A[][10],int r1,int c1){

    for (int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\t",A[j][i]);
        }
        printf("\n");

    }

}