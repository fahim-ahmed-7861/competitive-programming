#include<stdio.h>
#include<string.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        char ch[100000];
        scanf("%s",ch);

       // strrev(ch);

        int count=0,i;

        for(i=0; i<strlen(ch); i++)
        {
            if(ch[i]=='<'&& ch[i+1]=='>') count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
