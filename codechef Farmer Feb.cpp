#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,ara[3000],n,s=3000;

    n=sqrt(s);

    for(i=0; i<=3000; i++)
    {
        ara[i]=i;
    }
    ara[0]=ara[1]=0;
    for(i=2; i<=n; i++)
    {
        for(j=i*i; j<=s; j+=i)
        {
            ara[j]=0;
        }
    }
    int t,a,b,sum;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&a,&b);

        sum=a+b+1;

        for(i=sum; i<=3000; i++)
        {
            if(ara[i]!=0)
            {
                break;
            }
        }
        printf("%d\n",i-(a+b));
    }
    return 0;

}
