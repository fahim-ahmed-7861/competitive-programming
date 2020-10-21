
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,s,count=0,len,k,n=0;

    char str[1000],sub[1000];

    gets(str);
    gets(sub);


    len=strlen(str);

    s=strlen(sub);

    for(i=0; i<len; i++)
    {
        count=0;

        for(j=0,k=0; j<i+s; j++,k++)
        {
            if(str[j]==sub[k])
            {
                count++;
                 p=i;
            }

            else break;
        }
        if(n<count)n=count;

        if(count==s)break;
    }
     printf("%d\n",n);


}
