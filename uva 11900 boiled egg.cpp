#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,i,q,sum,j=0;

    scanf("%d",&t);

    while(t--)
    {
        sum=0;
        scanf("%d %d %d",&n,&p,&q);

        int ara[n+1];

        for(i=1; i<=n; i++)scanf("%d",&ara[i]);

        for(i=1; i<=n && i<=p; i++)
        {
            sum+=ara[i];

            if(sum>q)break;
        }
        printf("Case %d: %d\n",++j,i-1);
    }
    return 0;
}
