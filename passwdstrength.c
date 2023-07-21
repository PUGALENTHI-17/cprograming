#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<string.h>



int check_password(char *password);
int main ()
{
    char *pass;
    pass =getpass("Enter your password:");
    printf("%s\n",pass);
    int strength = check_password(pass);
    printf("Strength of your password is :%d\n",strength);

}

int check_password(char *password)
{
   int score = 0;
   int count =0;
   int slen =strlen(password);
   //length
   printf("Length of your password is :%d\n",slen); 
   if (slen>=8){
       score = score+1;
   } 

   //upper case
   for(int i= 0; i<=slen;i++){
       if(isupper(password[i])){
           score = score+1;
           printf("Your password contain upper case\n");
           break;
       }
   }
   // lower case 
   for (int i=0;i<=slen; i++){
       if(islower(password[i])){
           count =count+1;
           if (count>=3){
            score = score+2;
            count =0;
            printf("Your password contain Three lower case\n");
            break;
            }
           
       }
    }
       //check for symbols 

       for(int i= 0; i<=slen;i++){
         if(ispunct(password[i])){
           score = score+2;
           printf("Your password contain symbol\n");
           break;
         }
       }

       //check for Three numbers 
       for (int i=0;i<=slen; i++){
            if(isdigit(password[i])){
             count =count+1;
             if (count>=3){
                score = score+1;
                count =0;
                printf("Your password contain  Three Numbers\n");
                break;
              }
            }
        }


    // check three numbers are sequential 
    for (int i =0; i<slen;i++){
        if(isdigit(password[i] )){
            if(isdigit(password[i+1])&&isdigit(password[i+2])){
                int p1= password[i];
                int p2= password[i+1];
                int p3=password[i+2];
                if(p1+1==p2&&p2+1==p3){
                    printf("your password is sequential\n");
                break;
                }
            
            }
            else
            {
                score=score+3;
                printf("Your password dosn't contain sequential numbers\n");
                break;
            }

        }
    }
    return score ;
}
