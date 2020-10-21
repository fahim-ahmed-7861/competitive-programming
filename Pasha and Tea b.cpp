#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum,w;

    int i,n,p;
    scanf("%d %lf",&n,&w);

    double ara[n*2+5];

    p=2*n;

    for(i=0; i<p; i++)scanf("%lf",&ara[i]);

    sort(ara,ara+p);

    if(2*ara[0]<=ara[n])sum=2*ara[0];

    else sum=ara[n];

    sum=sum*n*1.5;

    if(sum<=w)printf("%lf\n",sum);

    else printf("%lf\n",w);

    return 0;
}
