#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>adj[1000];
bool vis[1000];
int par[1000];
bool flag=false;
int cnt=0;

void dfs(int s,int p){


    if(flag)return ;

    vis[s]=true;


    for(auto x: adj[s]){

        if(vis[x]==false){
            dfs(x,s);
        }
        else if(x!=p && flag==false){

               // cout<<x<<" "<<s<<" "<<flag<<endl;

             cnt++;

            ll pos=0;

           for(auto c : adj[s])
           {
               if(c!=x)pos++;

               else break;

           }

           adj[s].erase(adj[s].begin()+pos);

           pos=0;

           for(auto c : adj[x])
           {
                if(c!=s)pos++;

               else break;
           }

            adj[x].erase(adj[x].begin()+pos);

           flag=true;
           return ;




        }
    }
}
int main()
{


    int n,m,x,y;

    n=1;
    m=7;

    cout<<n%m<<endl;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

   dfs(1,1);

  // cout<<flag<<endl;

   if(flag)
   {
       memset(vis,false,sizeof(vis));


       bool ok=true;
       cnt=0;


       flag=false;

       dfs(1,1);




       for(ll i=1; i<=n; i++)
       {
           if(vis[i]==false)
           {
               //cout<<i<<endl;
               ok=false;
               break;
           }
       }



         if(ok && flag==false)
        cout<<"FHTAGN!"<<endl;
    else
        cout<<"NO"<<endl;
   }

    else
        cout<<"NO"<<endl;
    return 0;
}
