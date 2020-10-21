#include<stdio.h>
#include<string.h>
int main()
{
    int T,count,i,s,p;
    char str[1001];
    char ch;
    scanf("%d",&T);

    while(T--)

       {
           count=0;

        scanf(" %[^\n] %c",str,&ch);

        p=ch;
        for(i=0; i<strlen(str); i++)
        {
            s=str[i];
            if(s==p) {count++;}
            else if(str[i]>='a' && str[i]<='z')
            {
                if(p==s-32)count++;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                if(p==s+32)count++;
            }

        }
        if(count>0) printf("%c have =%d\n",ch,count);
        else {printf("%c is not present\n",ch);}
    }
}
