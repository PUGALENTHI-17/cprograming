#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",factorial(n));

}

int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
