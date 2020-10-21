#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;

    cin>>n;

    int ara[n+5];


    for(i=1; i<=n; i++)cin>>ara[i];

    for(i=1; i<=n; i++)
    {
        if(ara[ara[ara[i]]]==i)
        {
            printf("YES\n");

            return 0;
        }
    }

    cout<<"NO"<<endl;
}
