#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,k;

    char s[1002],word[1002];

    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[^\n]",s);

        for(i=0,k=0; i<strlen(s); i++)
        {
            if(s[i]!=' ')
            {
                word[k]=s[i];
                k++;
            }
            else if(k>0)
            {
                word[k]='\0';
                printf("%s ",word);
                k=0;
            }
        }
        if(k>0)
        {
            word[k]='\0';

            printf("%s\n",word);
        }



    printf("%s\n",strrev(word));}
    return 0;
}
