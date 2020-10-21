#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,s,count=0,len,k;

    char str[1000],sub[1000];

    printf("input a string:\n");

    gets(str);

    printf("input a sub string:\n");

    gets(sub);

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
                 p=i;
            }

            else break;
        }

        if(count==s)break;
    }


    if(count==s)printf("sub string index: %d\n",p);

    else printf("Wrong input");
}
