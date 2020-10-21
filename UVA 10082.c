#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];

    while(gets(str)!=EOF)
    {

    int i,j,k=strlen(str),p;

    char str2[]="ASDFGHJKL;'ZXCVBNM,./QWERTYUIOP[]`1234567890-=";

    p=strlen(str2);

    char c;

    for(i=0; i<k; i++)
    {
        c=str[i];
        for(j=0; j<p; j++)
        {
            if(c==str2[j] && c!='A' && c!='Z' && c!='Q')
            {
                printf("%c",str2[j-1]);
                break;
            }
        }
        if(j==p)
        {
            if(c==' ' || c=='A' || c=='Z' || c=='Q') printf("%c",c);

            else printf("'");

        }

    }
    printf("\n");
    }

    return 0;
}
