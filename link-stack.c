#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>

void push();
void display();
void pop();

struct node {
    int data ;
    struct node *next;

} *new ,*top, *temp;

int main(){
int choice;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
 }   

 
void push(){
    int  ele;
    new = (struct node *)malloc(sizeof(struct node) );
    scanf("%d",&ele);
    if (top==NULL){
        new ->data =ele ;
        new ->next = NULL;
        top=new;
    }
    else{
        new->data = ele;
        new->next =top;
        top=new;
    }
}

void display(){

    temp =top;
    while(temp !=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }

}

void pop(){
    if(top<=-1){
        printf("Stack is empty ");

    }
    else {
        temp =top;
        printf("%d",temp->data);
        top--;
    }
}