#include<stdio.h>
#include<string.h>
int main()
{
     int k=0,i,count=0;

    char ch[100001],ch1[4]={'C','H','E','F'};
    scanf("%s",ch);

    for(i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]==ch1[k])
        {
           if(k==3)
           {
               count++;
               k=0;
           }

            k++;
        }
    }
    printf("%d\n",count);

    return 0;
}
