#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int MAX = 10005;
vector < int > adj[MAX];
int node,edge,flag=1;
int visited[MAX];
stack < int > ans;

void input()
{
    cin>>node>>edge;

    int u,v;

    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;

        adj[u].pb(v);
    }
}

void topSort_DFS(int s)
{
    if(visited[s]==1)
    {
      cout << "There is cycle in this graph.TopSort can't be performed\n";
        flag = 0;
        return;
    }

    visited[s]=1;

    for(auto x : adj[s])
    {
        if(visited[x]!=2)topSort_DFS(x);
    }


    if(flag
       )ans.push(s);

    visited[s]=2;

}



void solve()
{
    for(int i=1; i<=node; i++)
    {
        if(!visited[i] && flag)topSort_DFS(i);
    }
}


void print()
{

    while(ans.size())
    {
        cout<<ans.top();

        ans.pop();

        if(ans.size())cout<<"->";
    }

    cout<<endl;
}
int main()
{
     cout<<"Please input number of node and edge : ";

    input();

    solve();

    if(flag)print();
}

/*
 7 6
1 5
1 2
2 3
2 4
6 5
7 4

*/

/*

cycle

3 3
1 2
2 3
3 1

*/

