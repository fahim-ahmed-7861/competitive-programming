#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[11000];
    while(scanf(" %[^\n]",str)==1)
    {
        int a,mod=0,k,res=0,n=strlen(str),i,count=0,p;

        if(str[0]=='0' && n==1)break;

        double x=0.0;

        a=n/4;
        res=n%4;

        for(i=n-1,k=0,a=1; i>=0; i--,k++)
        {
            x+=(str[i]-48)*pow(10,k);
            count++;
            if(count==4)
            {
                x+=mod;
                count=0;
                p=x;
                mod=p%11;
                k=-1;
                count=0;
                x=0;
                p=0;
                a++;
            }
        }
        if(res>=0)
        {
            x=mod;
            for(i=res-1,k=0; i>=0; i--,k++)
            {

                x+=(str[i]-48)*pow(10,k);
            }
        }
        p=x;
        if(p%11==0)printf("%s is a multiple of 11.\n",str);

        else printf("%s is not a multiple of 11.\n",str);

    }
    return 0;
}
