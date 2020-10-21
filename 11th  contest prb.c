#include<stdio.h>
int main()
{
    long long int sum,i;
    int n,T;
    scanf("%d",&T);

    while(T--){
            sum=1;
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        sum=sum*i;
    }
    printf("%lld\n",sum);
    }
    return 0;
}
