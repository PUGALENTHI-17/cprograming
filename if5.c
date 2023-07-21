#include <stdio.h>

int main() 
{ 
	int a,b,c,d,e;
	printf("Enter five students marks:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a>=50 && a<=100){printf("\nA is Pass\n");}
	else{printf("\nA is Fail\n");}
	
	if(b>=50 && b<=100){printf("\nB is Pass\n");}
	else{printf("\nB is Fail\n");}
	
	if(c>=50 && c<=100){printf("\nC is Pass\n");}
	else{printf("\nC is Fail\n");}
	
	if(d>=50 && d<=100){printf("\nD is Pass\n");}
	else{printf("\nD is Fail\n");}
	
	if(e>=50 && e<=100){printf("\nE is Pass\n");}
	else{printf("\nE is Fail\n");}
	return 0; 
}