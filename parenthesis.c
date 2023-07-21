#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
     char str[50] ;
     int flag=0;
     scanf("%s",str);
     printf("%s",str);

     for(int i=0;i<strlen(str);i++){
          if (strlen(str)==0)
          {
              printf("yes");
          }
          else{
               if (str[i]=="("||str[i]=="*")
               {
                    for (int j = 1; j < strlen(str); j++)
                    {
                         if(str[i]==")"||str[i]=="*"){
                              flag=1;
                         }
                    

                    }
                    
                    
               }

               
          }
     if (flag==1)
     {
          printf("yes");
     }
     else{
          printf("No");
     }
     
          
     }
}