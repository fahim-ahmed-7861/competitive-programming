#include<stdio.h>
int main()
{

    long long t;

    scanf("%lld",&t);

    while(t--)
    {
        long long num=0,i=0,res,n,binary[10000]    ;
        scanf("%lld",&n);


        while(n>0)
        {
            binary[i]=n%2;
            n=n/2;
            i++;
        }

        for(i=i-1; i>=0; i--)
        {
            printf("%lld ",binary[i]);
        }
        printf("\n");
    }


}

