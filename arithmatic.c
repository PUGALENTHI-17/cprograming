#include <stdio.h>
#define a 10 
#define b 20

int main()
{
    // int a,b,c;
    int c ;


    //  printf("Enter A:");
    // scanf("%d",&a);
    // printf("Enter B:");
    // scanf("%d",&b);

    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    // a = (float)a;
    // b = (float)b;
    // c = (float)c;
    // printf("float of c :%f",c);
    // // c = (float)a/(float)b;
    printf("a/b = %.1f \n",(float)a/(float)b);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}