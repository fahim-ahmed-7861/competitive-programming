#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];

    scanf(" %[^\n]",str);

    int i,j,k=strlen(str),p;

    char str2[]="ASDFGHJKL;ZXCVBNM,./QWERTYUIOP[1234567890-=";

    p=strlen(str2);
   // printf("%d %d",k,p);

    char c;

    for(i=0; i<k; i++)
    {
        c=str[i];
        for(j=0; j<p; j++)
        {
            if(c==str2[j])
            {
                printf("%c",str2[j-1]);
            }
        }
        if(str[i]==' ')printf(" ");
    }

    return 0;
}
