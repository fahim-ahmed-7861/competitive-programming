#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{

    fastread();

    long long n,i,k,m=1e9,p,pos;

    cin>>n>>k;

    for(i=1; i<=k; i++)
    {
        cin>>p;

        if(p<=m)
        {
        pos=i;

           m=p;
        }

    }

    cout<<pos<<" "<<n/m<<"\n";


}

