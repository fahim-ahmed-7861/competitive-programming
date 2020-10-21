#include<stdio.h>
int main()
{
   char str[1000];
   int t;
   scanf("%d",&t);

   while(t--)
   {
      scanf("%s",str);

      if(str[0]=='a')printf("Accepted\n");

      else if(str[0]=='w')printf("Wrong Answer\n");

      else if(str[0]=='r')printf("Run Time Error\n");

      else if(str[0]=='t')printf("Time Limit Exceeded\n");
   }
   return 0;
}
