#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,i,sum;
    char str[500005];
    char ch[500005];
    scanf("%d",&t);

    while(t--)
    {
        c=0;
        n=0;
        scanf(" %[^\n]",ch);

        for(i=0; ch[i]!='\0'; i++)
        {
            if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z')
            {
                if(ch[i]>='A' && ch[i]<='Z')
                {
                    str[n++]=ch[i]+32;
                }
                else str[n++]=ch[i];
            }
        }
        str[n]='\0';

        n-=3;

        for(i=0; i<n; i++)
        {
           if(str[i]=='c' || str[i]=='f' || str[i]=='e' || str[i]=='h')
           {
               if(str[i]!=str[i+1] && str[i]!=str[i+2] && str[i]!=str[i+3]
                  && str[i+1]!=str[i+2] && str[i+1]!=str[i+3] && str[i+2]!=str[i+3])
               {
                    if(str[i+1]=='c' || str[i+1]=='f' || str[i+1]=='e' || str[i+1]=='h')
                        {
                             if(str[i+2]=='c' || str[i+2]=='f' || str[i+2]=='e' || str[i+2]=='h')
                             {
                                 if(str[i+3]=='c' || str[i+3]=='f' || str[i+3]=='e' || str[i+3]=='h')c++;
                             }
                        }
               }
           }
        }

        if(c==0)printf("normal\n");

        else printf("lovely %d\n",c);
    }
    return 0;
}
