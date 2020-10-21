#include<stdio.h>
#include<string.h>
int sub_index(char str[],char sub[],int len,int s)
{
     int i,j,p,count,k;

    for(i=0; i<len; i++)
    {
        count=0;
        p=-1;

        for(j=i,k=0; j<i+s && i+s<len; j++,k++)
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
    return p;

}
int main()
{
    int s,len,k;

    char str[1000],sub[1000];

    gets(str);

    gets(sub);

    len=strlen(str);

    s=strlen(sub);

    k=sub_index(str,sub,len,s);

    if(k>=0)printf("sub string index: %d\n",k);

    else printf("Wrong input");

    return 0;
}
