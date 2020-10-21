#include<stdio.h>
#include<string.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        char ch[500],ch1[500];

        scanf("%s",ch);

        strcpy(ch1,ch);

        strrev(ch1);

        if(!strcmp(ch,ch1)) printf("wins\n");

        else printf("losses\n");
    }
    return 0;
}
