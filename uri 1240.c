#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],ch[1000];
    int i,j,n,m,t,s,count;
    scanf("%d",&t);

    while(t--)
    {
        count=0;

    scanf("%s %s",str,ch);

    n=strlen(str);
    m=strlen(ch);

    if(n<m)printf("nao encaixa\n");

    else
    {
        s=n-m;

        for(i=s,j=0; str[i]!='\0'; i++,j++)
        {
            if(str[i]==ch[j])count++;
        }

        if(count==m)printf("encaixa\n");

        else printf("nao encaixa\n");
    }

    }
    return 0;
}
