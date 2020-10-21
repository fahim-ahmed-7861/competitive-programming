#include<stdio.h>

int main()
{
    int t,i,j;
    char str[1010],ctr[1010];

    scanf("%d",&t);

    while(t--)
    {
        int c=0;
        scanf("%s %s",str,ctr);

       for(j=0; ctr[j]!='\0'; j++)
       {
           for(i=0; str[i]!='\0'; i++)
           {
               if(ctr[j]==str[i])
               {
                   str[i]=' ';
                   c++;
                   break;
               }
           }
       }
       printf("%d\n",c);
    }
}
