#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>pll;
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
const int Max = 1e5 + 10;

//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2018
//-------------------------------------------------------------------------------------------------------------------


vector< pair<int,int> >v[Max];

ll dist[Max+1];

bool visit[Max+1];

int e,node;

int par[Max+1];

vector<int>ans;

void init()
{
    fill(dist,dist+Max,1e18);

}

void input()
{
    int a,b,w;

    for(int i=0; i<e; i++)
    {
        cin>>a>>b>>w;

        v[a].pb({b,w});

        v[b].pb({a,w});
    }

}

bool Djkastra(int s,int n)
{
    priority_queue<pll,vector<pll>,greater<pll> > pq;

    pq.push({0,s});

    dist[s]=0;


         while(pq.size())
         {
            int a=pq.top().S;

            pq.pop();

            visit[a]=true;


            for(int i=0; i<v[a].size(); i++)
            {

              int  b=v[a][i].F , w=v[a][i].S;


              if(!visit[b] && dist[b]>dist[a]+w)
              {
                  dist[b]=dist[a]+w;


                  pq.push({dist[b],b});


                  par[b]=a;


              }
              //cout<<a<<endl;
            }


         }

         if(dist[n]==1e18)return false;

         else return true;
}
void DistPrint()
{
    for(int i=1; i<=node; i++)
    {
        cout<<dist[i]<<" ";
    }

    cout<<endl;
}

void backtrack(int n)
{
    if(par[n]==n)return ;


    ans.pb(n);

    backtrack(par[n]);
}

void printsoln()
{
    for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
}
int main()
{
   fastread();

   init();

   cin>>node>>e;

  input();

  //if(Djkastra(1,node))
  {
      backtrack(2);

      printsoln();
  }

  //else cout<<-1<<endl;






}

// source 1 ar jonno .. 2 weay grap


/*

4 4

1 2 2
1 3 5
2 3 1
3 4 3

*/
