#include<stdio.h>

int main (){
    int a,n,rem,sum=0 ;
    scanf("%d",&a);
    n = sizeof(a)/4;
    for (int i=0;i<n;n=n/10){
        rem = n%10;
        sum =sum +rem;
    }
}