#include<stdio.h>
int main()
{
    long long i,j=0,n,a=0,b=1,c,fibo[65];
    int t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%lld",&n);
        a=0;
        b=1;

     fibo[0]=0;

        fibo[1]=1;
    for(i=2; i<=61; i++)
    {

       c=a+b;
       fibo[i]=c;

        a=b;

        b=c;
      //  fib[j] = fib[j-2] + fib[j-1];


    }
   // for(i=0; i<61; i++)printf("%lld ",fibo[i]);
     printf("Fib(%lld) = %lld\n",n, fibo[n]);
    }
    return 0;

}
