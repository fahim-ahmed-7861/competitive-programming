#include<stdio.h>
#include<string.h>
int main()
{

    char ch[100001];
    scanf("%s",ch);

    int k=0,i,count=0,c=0,e=0,f=0,p=0,m;

    m=strlen(ch);

    for(i=0; i<m; i++)
    {
        if(ch[i]=='C')
        {
          c++;
        }
        else if(ch[i]=='H' && c>e)
        {
            e++;
        }
        else if(ch[i]=='E' && e>p)
        {
            p++;
        }
        else if (ch[i]=='F' && p>f)
        {
            count++;
            c=0;
            e=0;
            f=0;
            p=0;

        }
    }
    printf("%d\n",count);

    return 0;
}
