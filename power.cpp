#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}

int main()
{
    ll sum=1e18,cum=0,i=1;

    while(sum>cum)
    {
        cum+=i;

        i++;
    }

    cout<<i<<endl;

}
