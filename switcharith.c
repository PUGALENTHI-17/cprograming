#include<stdio.h>

int main()
{
	int choice,num1,num2,result;

	
	while(1)	
	{
		printf("\nArithmetic operations  choice");
		printf("\n1.Addtion \n2.subraction\n3.Multiplication\n4.division\n5.Modulo\n6.Exit");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
        printf("\nEnter Num1:");
		scanf("%d",&num1);
        printf("\nEnter Num2:");
		scanf("%d",&num2);

        
		
		switch(choice)
		{
			case 1: result =num1+num2;
					break;
			case 2: result =num1-num2;
					break;
			case 3: result =num1*num2;
					break;
			case 4: result =num1/num2;
                    break;
			case 5: result =num1%num2;
                    break;
            case 6: exit(0);
			default: printf("\nInvalid choice!!");
		}
        printf("\n Result=%d\n",result);
	}
}