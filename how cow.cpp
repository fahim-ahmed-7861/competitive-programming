#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,x1,y1,x2,y2,x,y,n,i;
   cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>x1>>y1>>x2>>y2>>n;
        printf("Case %d:\n",k);
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2)
            printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
