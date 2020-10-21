#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   .h>
#include<math.h>
#define size 10000
int ara[10100];
int main()
{
    int i,j,n;

    n=sqrt(size);
    ara[0]=ara[1]=1;

    for(i=4; i<=size; i+=2 )
    {
        ara[i]=1;
    }

    for(i=3; i<=n; i+=2)
    {
        for(j=i*i; j<=size; j+=i*2)
        {
            ara[j]=1;
        }
    }

     for(i=2; i<size; i++)
    {

      if(ara[i]!=1)printf("%d\n",i);

    }
    return 0;
}
