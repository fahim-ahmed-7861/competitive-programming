#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int Max = 100005;

int indegree[Max];

bool visited[Max];

vector<int>adj[Max];

int node,edge;


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

void indegree_print()
{
    for(int i=1; i<=node; i++)
    {
        cout<<"indegree of "<<i<<" is : "<<indegree[i]<<endl;
    }
}

void topSort()
{
    int n=node,i;

    while(n>0)
    {
        for(i=1; i<=node; i++)
        {
            if(!visited[i] && !indegree[i])
            {
                cout<<i<<endl;

                visited[i]=1;

                for(auto x : adj[i])
                {
                    indegree[x]--;
                }

                n--;
            }
        }
    }
}

int main()
{
    cout<<"Please input number of node and edge : ";

    input();

    indegree_print();

    topSort();
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
