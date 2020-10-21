#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<ll,pair<ll,ll>>plll;
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define mp make_pair
#define pb push_back
#define pp pop_back
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 10000 + 10;

//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2018
//-------------------------------------------------------------------------------------------------------------------


int dist1[Max],dist2[Max];

vector<pii>v[Max],adj[Max],temp;

bool vis[Max+1];

int n,m,s,t,p;


void input()
{
    int a,b,w,i;

    scanf("%d %d %d %d %d",&n,&m,&s,&t,&p);

    for(i=0; i<m; i++)
    {
        scanf("%d %d %d",&a,&b,&w);


        v[a].pb({b,w});

        adj[b].pb({a,w});


    }
}

void Djkastra(int start,int *dist,int type)
{

 fill(vis,vis+Max,false);

      priority_queue<pii,vector<pii>,greater<pii> >pq;

      pq.push({0,start});

      dist[start]=0;
// cout<<type<<endl;



       while(pq.size())
       {
           int a=pq.top().S;

           pq.pop();

           vis[a]=true;




           if(type==1)temp=v[a];

           else {
                temp=adj[a];


           }

           for(int i=0; i<temp.size(); i++)
           {
               int b=temp[i].F,w=temp[i].S;

               if(!vis[b] && dist[b]>dist[a]+w)
               {
                  dist[b]=dist[a]+w;

                   pq.push({dist[b],b});
               }
           }




       }


}

void Clear()
{


     fill(dist1,dist1+Max,1e9);
      fill(dist2,dist2+Max,1e9);

      for(int i=0; i<=Max; i++)
        v[i].clear(),adj[i].clear();


}

int solve()
{
    int mx=-1;

    for(int i=1; i<=n; i++)
    {
       for(auto x : v[i])
       {
           int w=x.S,a=i,b=x.F;

          // cout<<dist1[a]+dist2[b]+w<<endl;

           if(dist1[a]+dist2[b]+w<=p)
            mx=max(mx,w);

         //   cout<<"hjash : "<<mx<<endl;}
       }
    }

    return mx;
}

int main()
{

    fastread();

    int tt,cas=1;

    scanf("%d",&tt);

    while(tt--)
    {


        Clear();
        input();


        Djkastra(s,dist1,1);

        Djkastra(t,dist2,2);

        int mx=solve();

         printf("Case %d: %d\n",cas++,mx);


    }



}

/*

1
4 4 1 4 40
1 2 7
1 3 9
3 2 3
2 4 1
*/
























