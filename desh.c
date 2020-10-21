#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
  scanf("%s",str);
   int i=0,j,temp,counta=0,countb=0,n=strlen(str),temp1=0,dot=0;
   for(i=0; i<n; i++)
   {
       if(str[i]=='a')
       {
           temp++;
           for(i=j+1;i<n;i++)
           {
               if(str[i]=='.')counta++;
               else if(str[i]=='a')
               {
                temp=counta+1;
                //i--;
               // break;
               }
               else
               {
                   i--;
                   break;
               }
           }
       }
       else if(str[i]=='b')
       {
           temp1++;
           for(i=j+1;i<n;i++)
           {
               if(str[i]=='.')dot++;
               else if(str[i]=='b')
               {
                temp1+=dot+1;

               }
               else
               {
                   i--;
                   break;
               }
           }
       }

   }
   printf("%d %d",temp,temp1);
}
