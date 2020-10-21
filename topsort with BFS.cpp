#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int Max = 100005;

int indegree[Max];

vector<int>adj[Max];

int node,edge;


queue<int>q;


void input()
{
    cin>>node>>edge;

    int u,v;

    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;

        adj[u].pb(v);

        indegree[v]++;

    }


}

void topSort_BFS()
{

    while(q.size())
    {
        int n=q.front();

        q.pop();

        cout<<n<<endl;

         for(auto x : adj[n])
         {
             indegree[x]--;

             if(!indegree[x])q.push(x);

         }
    }

}


void zeroindegreenode()
{
    for(int i=1; i<=node; i++)
        if(!indegree[i])q.push(i);
}


int main()
{
     cout<<"Please input number of node and edge : ";

    input();

    // at first push all zero indegree node in queue

    zeroindegreenode();


   topSort_BFS();
}









