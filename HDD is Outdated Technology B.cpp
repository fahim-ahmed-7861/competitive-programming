#include<bits/stdc++.h>
int main()
{
    int n,i,num;
    int a[200005];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        a[num]=i;
    }
    long long int sum=0;
    for(i=1;i<n;i++)
    {
        sum+=abs(a[i]-a[i+1]);
    }
    printf("%lld\n",sum);
    return 0;
}
