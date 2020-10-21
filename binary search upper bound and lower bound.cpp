#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
       return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}


vector<ll>v;

ll lower(ll mi,ll pos)
{
    ll st=0;

    ll en=v.size()-1;
    ll res;

     while(st<=en)
                {
                 ll   mid=(st+en)/2;


                    if(v[mid]-mi<pos)
                    {
                        st=mid+1;
                       // res=mid;
                    }
                    else
                    {
                        res=mid;

                        en=mid-1;
                    }
                }

    return res;
}
ll upper(ll mi,ll pos)
{
    ll st=0;
    ll en=v.size()-1;
    ll res;

     while(st<=en)
                {
                 ll   mid=(st+en)/2;


                    if(v[mid]-mi<=pos)
                    {
                        st=mid+1;
                        res=mid;
                      // res=mid;
                    }
                    else
                    {
                      // res=mid;

                        en=mid-1;
                    }
                }

    return res;
}


int main()
{

}
