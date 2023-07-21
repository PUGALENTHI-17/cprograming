#include<stdio.h>

int head ;
struct Node {
    int temp;
    int data;
    struct Node* next;
};

int main (){
    int temp ,i,j,k,m,n,o,p,sum,count,flag,temp;

}
void insert (){
    int value,new ,tail  ;
    scanf ("%d",&value);
    new ->data =value ;
    tail-> next = new ;
    new ->next =NULL;
    tail =new ;

}
void delete(pos ,temp){
    int i ;
    scanf("%d",&pos);
    temp = head ;
    for(i=0;i<pos-1;i++)
    {
        temp =temp->next ;
    }
    temp->next = temp -> next->next;
    

}

