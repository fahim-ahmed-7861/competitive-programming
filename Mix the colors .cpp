#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    scanf("%d",&t);

    while(t--)
    {
        int p=0;
        scanf("%d",&n);

        int ara[n+5],sum=0;

        for(i=0; i<n; i++)scanf("%d",&ara[i]);

        sort(ara,ara+n);

        for(i=1; i<n; i++)
        {
            if(ara[i-1]==ara[i])p++;

        }
        printf("%d\n",p);
    }
    return 0;
}
