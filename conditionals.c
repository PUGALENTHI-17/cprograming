#include <stdio.h>
#include<stdlib.h>

int main (){
    int num1,num2;
    printf("Enter the numbers: ");
    scanf("%d %d",&num1,&num2);
    // printf("num1%d num2%d",num1,num2);


    if(num1==num2 || num1>=num2){
        printf("First condition is True\n");
    }
    else {
        printf("First condition is false\n");
    }

    //AND
    if (num1>num2 && num1<=num2){
        printf("second condition is True\n");
    }
    else{
        printf("second condition is False\n");

    }
 
}