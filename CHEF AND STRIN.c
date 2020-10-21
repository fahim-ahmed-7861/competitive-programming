#include<stdio.h>
int main()
{
    char ch[100001],ch1[]={'C','H','E','F'};
    int k=0,i,count=0;

    scanf("%s",&ch);

    for(i=0; i<strlen(ch); i++)
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

}
