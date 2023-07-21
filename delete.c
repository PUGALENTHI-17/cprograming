#include<stdio.h>

int main()
{
   int n,pos;
   printf("Enter the size of the array: ");
   scanf("%d",&n);
   int arr1[n],arr2[n];
   int i,j;

   for (i=0;i<n;i++){
          printf("Enter %d elements:\n",i);
          scanf("%d",&arr1[i]);
   }
   
   printf("Enter the delete position: ");
   scanf("%d",&pos);

   if (pos>=n)
      printf(" not possible...");
   else
   {
      for (i=pos;i<n-1;i++)
        {
        arr1[i] = arr1[i+1];
        }
    printf("Result:\n");
    for(i=0;i<n-1;i++)
    {
      arr2[i]=arr1[i];
      printf(" %d\n",arr2[i]);
    } 
    printf("Result:\n");
    for(int j=0;j<n;j++){
        printf("%d\t ",arr2[j]);
        }
   return 0;
}
}