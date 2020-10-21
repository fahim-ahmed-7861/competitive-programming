#include<bits/stdc++.h>
using namespace std;

/*ong long sum(long long j)
{
    long long sum1=0,n=j/2;
    for(int i=1; i<=n; i++)
    {
        if(j%i==0)
        {
            sum1+=i;
        }
    }
    return sum1;

}*/
long long sum(long long n)
{
	long long sum=0,p=sqrt(n);
	int i;

	for(i=1;i<=p;i++)
	{
		if(n%i==0)
		{
			if(i==1||i==p)
			sum+=i;
			else
			{
				sum+=i;
				sum+=(n/i);
			}
		}
	}
	return sum;
}
int main()
{
    int t,k=1;

    scanf("%d",&t);
    while(t--)
    {
        int n,p,i;

        scanf("%d %d",&p,&n);

        printf("Case %d:\n",k++);

        map< long long,long long>ara;

        for(i=0; i<p; i++)
            ara[i]=-1;

        for(i=p; i<=n; i++)
            ara[i]=i;

        for(i=p; i<=n; i++)
        {
            long long a=sum(i);


            if(a>i)
            {
                long long b=sum(a);

                if(a<=n && b<=n)
                {
                    if(i==b && a!=b && ara[a]!=-1
                            && ara[b]!=-1)
                    {
                        printf("%d %d\n",i,a);

                        ara[a]=-1;
                        ara[b]=-1;
                    }
                }
            }
        }
    }
    return 0;
}
