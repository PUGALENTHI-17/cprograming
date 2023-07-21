#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
	
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;

   //if list is empty
   if(head == NULL) {
      return 0;
   }

   current = head->next;

   while(current != head) {
      length++;
      current = current->next;   
   }
	
   return length;
}

void insert_at_front(int key, int data) {

   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if (isEmpty()) {
      head = link;
      head->next = head;
   } else {
      link->next = head;
		
      head = link;
   }    
}

struct node * deleteFirst() {

   struct node *tempLink = head;
	
   if(head->next == head) {  
      head = NULL;
      return tempLink;
   }     

   head = head->next;
	
   return tempLink;
}   //return the deleted link


//display the list
void printList() {

   struct node *ptr = head;
   printf("\n[ ");
	
   //start from the beginning
   if(head != NULL) {
	
      while(ptr->next != ptr) {     
         printf("(%d,%d) ",ptr->key,ptr->data);
         ptr = ptr->next;
      }
   }
	
   printf(" ]");
}

void main() {
 while (1);
 
   insert_at_front(1,10);
   insert_at_front(2,20);
   insert_at_front(3,30);
   insert_at_front(4,1);
   insert_at_front(5,40);
   insert_at_front(6,56); 

   printf("Original List: "); 
	
   //print list
   printList();

   while(!isEmpty()) {            
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");  
      printf("(%d,%d) ",temp->key,temp->data);
   }   
	
   printf("\nList after deleting all items: ");
   printList();   
}