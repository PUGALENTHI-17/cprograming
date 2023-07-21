#include<stdio.h>
#include<stdlib.h>

int main(){

     int n;

     scanf("%d",&n);

     int x,y,p;

     scanf("%d %d %d",&x,&y,&p);

 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

     int colDiff = abs(j-y);

     int rowDiff = abs(i-x);

     int max = colDiff>rowDiff ? colDiff : rowDiff;

     int res = p>max ? p-max : 0;

    printf("%d ",res);

}

    printf("\n");

}

}
