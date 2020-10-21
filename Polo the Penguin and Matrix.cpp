#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int n,m,d,i,j,p,s,sum=0,c=0;

    scanf("%d %d %d",&n,&m,&d);

    n=n*m;

    for(i=0; i<n; i++)
    {
        scanf("%d",&p);

        v.push_back(p);
    }
    sort(v.begin(),v.end());

    n=v.size();

    s=v[(v.size()/2)];

    for(i=0; i<n; i++)
    {

        if(v[i]<=s)
        {
            sum+=(s-v[i])/d;
        }
        else
        {
            sum+=(v[i]-s)/d;

        }
        if(abs(v[i]-s)%d!=0)
        {
            c=1;
            break;
        }

    }

    if(c==1)
        printf("-1\n");

    else
        printf("%d\n",sum);


    return 0;

}
