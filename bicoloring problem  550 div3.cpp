#include<bits/stdc++.h>
using namespace std;
typedef int ll;
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
const int Max = 2e5 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;



ll ans[Max+10];

vector<ll>v[Max+20];

ll n,m,red=1,black=2;


map<pll,ll>mp;

ll vis[Max+10];

void input()
{
    cin>>n>>m;

    ll i,a,b;

    for(i=1; i<=m; i++)
    {
        cin>>a>>b;

        v[a].eb(b);

        v[b].eb(a);

        mp[{a,b}]=i;
    }
}

bool Bicoloring(ll s)
{
    vis[s]=red;

    queue<ll>q;

    q.push(s);



       while(!q.empty())
       {
             ll a=q.front();

             q.pop();



             for(auto b  : v[a])
             {
                if(vis[b]==0)
                {
                    if(vis[a]==red)
                    {
                        vis[b]=black;

                        if(mp[{a,b}]==0)
                            {

                                ans[mp[{b,a}]]=1;
                            }
                    }

                    else
                    {
                        vis[b]=red;

                         if(mp[{a,b}])
                            {

                                ans[mp[{a,b}]]=1;
                            }
                    }

                    q.push(b);



                }
                else if(vis[a]==vis[b])
                {
                    return false;
                }
             }
       }

       return true;
}
int main()
{

   fastread();

   ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q;


     string str;

 //  bool flag=true;

   input();


   //cout<<mp[{1,5}]<<endl;

    if(Bicoloring(1))
        {
            cout<<"YES"<<endl;

            for(i=1; i<=m; i++)
                cout<<ans[i];

            cout<<endl;
        }

    else cout<<"NO"<<endl;




}

