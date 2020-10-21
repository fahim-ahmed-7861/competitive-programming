#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

    ll k,sum=0,t,n;

    string str;

    cin>>t;

    while(t--)
    {
        cin>>str;

        if(str=="donate")
        {
            cin>>n;

            sum+=n;
        }
        else if(str=="report")
        {
            cout<<sum<<endl;
        }
    }


}


