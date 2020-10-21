#include<stdio.h>
int main()
{
    int n,i,c=0;
    char str[1000],ch;

    while(scanf("%d %s",&n,str)==2)
    {
        c=0;

         if(n==0 && str[0]=='0')return 0;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=n+48)
        {
           if(str[i]=='0' && c==0)continue;

           else printf("%c",str[i]);

            c=1;
        }
    }
    if(c==0)printf("0\n");

    else printf("\n");
    }

}
