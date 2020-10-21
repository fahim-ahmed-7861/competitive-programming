#include<stdio.h>
#include<math.h>
//#define size 1000
int main()
{

    long long  i,j,ara[1010],n,size=1000;

    n=sqrt(size);

    for(i=0; i<=1000; i++)
    {
        ara[i]=i;
    }
    ara[0]=ara[1]=0;
    for(i=2; i<=n; i++)
    {
        for(j=i*i; j<=size; j+=i)
        {
            ara[j]=0;
        }
    }

     for(i=2; i<=size; i++)
    {

      if(ara[i]!=0)printf("%d\n",ara[i]);

    }
    return 0;
}
