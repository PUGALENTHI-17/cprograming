#include <stdio.h>

int main()
{
 int t,i,j,count;
 scanf("%d",&t);
 while(t--)
 {
  char str[200];
  count=0;
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
   if(str[i]=='B')
   {
    for(j=1;j<=2;j++)
    {
     if(str[i+j]=='W')
     {
      count++;
      str[i+j]='a';
     }
     if(str[i-j]=='W')
     {
      count++;
      str[i-j]='a';
     }
    }
   }
  }
  printf("%d\n",count);
 }
}