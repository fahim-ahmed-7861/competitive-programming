#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,s,count=0,k,h=0,len,c=0;

    char str[1000],sub[1000];

     while(scanf("%s %s",sub,str)==2)
     {
         p=0;
         c=0;

    len=strlen(str);

    s=strlen(sub);

    for(i=0; i<len; i++)
    {
        count=0;

        for(j=i,k=0; j<i+s; j++,k++)
        {
            if(str[j]==sub[k])
            {
                count++;
            }

            else break;
        }

        if(count==s)
        {
            c++;
            p=i;
        }
    }

    if(c>=1)printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",++h,c,p+1);

    else printf("Caso #%d:\nNao existe subsequencia\n\n",++h);
     }
     return 0;
}

