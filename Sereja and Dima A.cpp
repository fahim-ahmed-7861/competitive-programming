#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,dim=0,she=0,x=0,y;

    cin>>n;
    y=n-1;
    int ara[n+2];

    for(i=0; i<n; i++)cin>>ara[i];

    for(i=0; i<n; i++)
    {
        if(ara[x]<ara[y])
        {
            if(i%2==0)she+=ara[y];

            else dim+=ara[y];

            y--;
        }
        else
        {
            if(i%2==0)she+=ara[x];

            else dim+=ara[x];

            x++;
        }
    }
    cout << she <<" "<<dim<<endl;

    return 0;
}
