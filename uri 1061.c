#include<stdio.h>
int main()
{
    char str[15],ch[15],str2[15],ch2[15];

    int n,i,k,p,s;

    scanf(" %[^\n]",str);

    scanf(" %[^\n]",ch);

    scanf(" %[^\n]",str2);

    scanf(" %[^\n]",ch2);

    for(i=0; str[i]!='\0'; i++)
    {
        if(isdigit(str[i])==1)
        {
            if(str[i+1]=='\0')

                s=str[i]-48;

             else

                s=(str[i]-48)*10+str[++i]-48;
        }
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        if(isdigit(str2[i])==1)
        {
            if(str2[i+1]=='\0')

                p=str2[i]-48;

             else

                p=(str2[i]-48)*10+str2[++i]-48;
        }
    }
    printf("%d\n",s);

        return 0;
}


