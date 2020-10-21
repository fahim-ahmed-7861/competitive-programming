#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
#define pb push_back
bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
       return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------


int main()
{
//   fastread();

   ll i,j=0,n,m,k=0;

    cin>>n>>m;


    string str;

    cin>>str;

    vector<char>v;

    ll sum=m/2;

    for(i=0; i<n; i++)
    {
        if(str[i]=='(' && j<sum)
        {
            v.pb(str[i]);
            j++;
        }
        else if(str[i]==')' && k<sum)
        {
            v.pb(str[i]);
            k++;
        }
    }

      for(i=0; i<v.size(); i++)
            cout<<v[i];







}
