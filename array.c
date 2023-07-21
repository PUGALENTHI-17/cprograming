#include <stdio.h>

int main(){

int arr[5];
int swap_arr[5];
int ibreak,j,n,sum=0 ;
n = sizeof(arr)/4;



//input 
for(i=0;i<5;i++){
    printf("Enter the array elements:");
    scanf("%d",&arr[i]);
}
printf(" size of array is%d\n",n);
printf("The array elements are\n :");


for(i=0;i<n;i++){
    
    printf("%d",arr[i]);
}

//sum of array elements 
for(i=0;i<n;i++){
    sum = sum + arr[i];
}

 printf("\nSum=%d\n",sum);

 //swap 
    printf(" Reverse of array =");
 for(i=n;i>=0;i--){
    printf("%d\n",arr[i]);

    }
    
}