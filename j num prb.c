
#include<stdio.h>
#define MOD 1000000007;

long long int power(long long int a,long long int n)
{
    if(n==0)return 1;
    long long int p=power(a,n/2);
    p=(p*p)%MOD;
    if(n%2==0)return p;
    return (p*a)%MOD;
}

int main()
{
    long long int N,M,K,R;
    scanf("%lld %lld %lld",&N,&M,&K);
    if((N+M)%2!=0 && K==-1)printf("0\n");
    else
    {
	   R=power(2,N-1);
	  // printf("%d\n",R);
	   printf("%lld\n",power(R,M-1));
    }
    return 0;
}
