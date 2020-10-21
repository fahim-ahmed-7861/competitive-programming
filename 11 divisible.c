#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[1100];

    int sumo=0,sume=0,n,i,sum;


    while(scanf(" %[^\n]",str)!=EOF)
    {
        n=strlen(str);
        if(str[0]=='0' && n==1)break;
        sumo=0,sume=0;
        for(i=1; i<n; i+=2)
        {
            sume+=str[i]-48;
        }
        for(i=0; i<n; i+=2)
        {
            sumo+=str[i]-48;
        }
        sum=abs(sume-sumo);

        if(sum%11==0)printf("%s is a multiple of 11.\n",str);

        else printf("%s is not a multiple of 11.\n",str);
    }

    return 0;
}

