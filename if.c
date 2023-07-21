#include<stdio.h>

int main (){
    int marks;
    // int std1,std2,std3,st4,std5;
    printf("Enter your marks");
    scanf("%d",&marks);
    if(marks>50)
    {
        if (marks>=95 && marks<=100){
         printf( "gold medalist");
        }
        else if (marks>=90 && marks<=95 ){
        printf("silver medalist");}
        else if (marks>=85 && marks<=90){
        printf("Bronze medalist");}
        else {
            printf("Average");
        }
    }
    else {
        printf("Fail");
    }

}
