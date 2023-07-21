#include <stdio.h>

void delete (int arr[],int n);
void display(int arr[],int size);
void insert(int arr[] ,int size );

int main()
{
    
    int i, pos, size,res[];

 printf("Enter the size :");
 scanf("%d",&size);
    int arr[100];
    
    for (i = 0; i < size; i++){
        printf("Enter elements %d: ",i);
        scanf("%d",&arr[i]);
    }
    
    insert(arr,size);
    display(arr,size);
    delete(arr,size);
    display(arr,size);
    
 
    return 0;
}


void insert(int arr[] ,int size ){
    int item ,pos;
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    
    // read position at which element is to be inserted
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);
 
    // increase the size
    size++;
 
    // shift elements forward
    for (int i = size-1; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
 
    // insert item at position
    arr[pos - 1] = item;

}


void delete (int arr[],int arr2[],int n){
    int key,pos;
    printf("Enter the delete position: ");
   scanf("%d",&pos);

   if (pos>=n)
      printf(" not possible...");
   else
   {
      for (int i=pos;i<n-1;i++)
        {
        arr[i] = arr[i+1];
        }
    printf("Result:\n");
    for(int i=0;i<n-1;i++)
    {
      arr2[i]=arr1[i];
      printf(" %d\n",arr2[i]);
    } 
}
void display(int arr[],int size){

   for(int i = 0; i < size - 1; i++){
            printf("%d \n",arr[i]);
    }
}

