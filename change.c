#include<stdio.h>


void  check (int arr[],int n);
int  main(){
    int n;
    scanf("%d",&n);
    int arr[5];
  
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
}

void  check (int arr[],int n){
int sum=0,sum1=0;

for(int i=0;i<5;i++){
      int j=0;
    if(arr[i]>5){
        sum=sum+(arr[i]-5);
        sum1=sum1+5;
    }
    else{
        sum1=sum1+arr[i];
    }

}

if(sum1-sum>0){
    printf("True");
}
else{
    printf("False");
}
}