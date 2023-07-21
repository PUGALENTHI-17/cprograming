#include<stdio.h>
#include<string.h>



int main (){
    char s[10] ;
    char goal[10];
    char str[10];
    char temp;
    int flag=0;
    gets(s);
    gets(goal);

    if (strcmp(s,goal)==0)
    {
        printf("True");
    }
    else
    {
        for (int i = 0; i < strlen(s); i++)
        {
           temp = s[i];
           s[i]=s[i+1];
           s[i+1]=temp;
            if (strcmp(s,goal)==0)
            {
               printf("True");
               break;
            }
            else
            {
                flag=1;
            }
            
            
        
        }
        
    }

    if(flag==1){
        printf("false");
    }



}