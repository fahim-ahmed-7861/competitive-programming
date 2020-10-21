#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10010];

    scanf(" %[^\n]",str);

    int i,j,k,n=strlen(str),c=0,p=0;

    char ch[]="abcdefghijklmnopqrstuvwxyz";


    if(n<=24) goto xx;
    for(i=0; i<n; i++)
    {
        if(str[i]=='z')
        {
            if(str[i]==ch[p])
            {
                p++;

                printf("%c",str[i]);
           c++;

           if(c==26)break;
            }
        }
       else if(str[i]==ch[p] || str[i]==ch[p-1])
        {
           p++;
           c++;

           if(str[i]==ch[p])printf("%c\n",str[i]);

           else printf("%c\n",ch[p]);

           if(c==26)break;
        }
    }

    if(c==26)printf("abcdefghijklmnopqrstuvwxyz\n");

   else xx:printf("-1\n");

   return 0;
}
