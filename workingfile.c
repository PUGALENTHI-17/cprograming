#include<stdio.h>

int main(){

       long n,num=0;

       scanf("%ld",&n);

       char s[n];

       long a[7]={0},count=0;

       scanf("%s",s);

       for(long i=0;i<n;i++){

              switch(s[i]){

                     case 'h':  a[0]++;

                                  break;

                     case 'a':  a[1]++;

                                  break;

                     case 'c':  a[2]++;

                                  break;

                     case 'k':  a[3]++;

                                  break;

                     case 'e':  a[4]++;

                                  break;

                     case 'r':  a[5]++;

                                  break;

                     case 't':  a[6]++;

                                  break;

              }

       }

a[0]=a[0]/2;

a[1]=a[1]/2;

a[4]=a[4]/2;

a[5]=a[5]/2;

num=a[0];

for(long i=0;i<7;i++){

       if(a[i]<num)

       num=a[i];

}

printf("%ld",num);
}

