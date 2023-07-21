#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int Top=-1;
char stack[50];
void Push();
void Pop();
void display();
 
int main()
{
	int choice;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: display();
					break;
			case 4: paren();
                    break;
            case 5: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 //insert 
void Push()
{
	char x;

		printf("\nEnter element to be inserted to the stack:");
		scanf("%s",x);
		Top=Top+1;
		stack[Top]=x;

}
 
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",stack[Top]);
		Top=Top-1;
	}
}
 //display
void display()
{
	
	
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%s\n",stack[i]);
	}
}

int  paren(){
    if (Top==-1)
    {
        printf("yes");
    }
    else {
        if(stack[Top]== "*"||stack[Top]=="("){
            Pop();
            if(stack[Top]==")"||"*"){
                printf("True");
            }
            else{
                printf("False");
            }
        }
    }
    
    return 0 ;
}