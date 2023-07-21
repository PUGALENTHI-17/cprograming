#include<stdio.h>
#include<stdlib.h>
#define size 50

int rear =-1,top=-1 ;
int queue[size];
void show();
void enqueue();
void dequeue();

int main(){
 int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
}

void enqueue (){
    if (rear == size-1){
        printf("Overflow");
    }
    else {
    
    int Ele;
    printf("Enter the Element to insert :");
    scanf("%d",&Ele);
    top =0;
    rear ++;
    queue[rear] = Ele;

    }

}

void dequeue(){

if (top==-1){
    printf("queue is empty");
}
else {
    top =top +1 ;
    printf("element Deleted ");
}
}

void show(){
    if (top==-1 ){
    printf("queue is empty");
}
else {
    for (int i =top;i<=rear;i++){
        printf("%d",queue[i]);

    }
    printf("\n");
}

}