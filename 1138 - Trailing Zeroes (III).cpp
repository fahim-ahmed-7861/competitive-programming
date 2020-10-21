#include<bits/stdc++.h>
using namespace std;
typedef long long ull;
typedef unsigned long long ll;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back

int zerochecking(ll n)
{
    int cnt=0;

    while(n)
    {
        cnt+=n/5;
        n/=5;
    }

    return cnt;
}

int Binary_search(ll n)
{
    int st=0,en=1e9,ans=0,mid,cnt;


    while(st<=en)
    {
        mid=(st+en)/2;

        cnt=zerochecking(mid);



          if(cnt>=n)
          {
              ans=mid;

              en=mid-1;
          }
          else
          {
              st=mid+1;
          }
    }

    return ans;
}

int main()
{
    fastread();


     int n,t,cas=1;

     cin>>t;

     while(t--)
     {
         cin>>n;

         ll ans=Binary_search(n);

         cout<<"Case "<<cas++<<": ";

         if(zerochecking(ans)==n)
            cout<<ans<<endl;

         else cout<<"impossible"<<endl;
     }


}












