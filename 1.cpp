#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];
    bool flag=false;
    ll c=1,b=1;
    for(int i=0; i<n; i++)
    {
        flag=false;
        for(int j=0; j<n; j++)
        {
            if(i==0 && __gcd(a[i],a[j])>1 && i!=j)
            {
                b++;
            }
            if(__gcd(a[i],a[j])>1 && i!=j)
            {
                flag=true;
            }
        }
        if(flag==false)
            c++;
    }
    cout<<c<<endl;
    if(n==1)
        cout<<1<<" "<<1<<endl;

    else if(c==1)
    {
        if(n-2>0)cout<<2<<" "<<n-2<<endl;
        else cout<<2<<" "<<1<<endl;
    }
    else
    {
        cout<<c-1<<" "<<b<<endl;

    }
    return 0;
}
