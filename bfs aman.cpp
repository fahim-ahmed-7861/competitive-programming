#include<bits/stdc++.h>
using namespace std;
vector < int > A[10000+5];
int v,e;
bool visited[10005];
queue<int>  B;

int cost[10005];

void Input()
{
    int a,b;
   // cout << "Enter number of vertices and edges\n";
    cin >> v >> e;
   // cout << "Enter the Graph's connections\n";
    for(int i=1;i<=e;i++)
    {
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    vector<int>::iterator it;
     for ( int i = 0; i <=e; i++ )
  {
       if(!A[i].empty())
       {
           printf("%d---->",i);

           for(it=A[i].begin(); it!=A[i].end(); it++)
           {
               printf("%d ",*it);
           }
           printf("\n");
       }
  }
  printf("\n\n");
}
void bfs(int start)
{
    visited[start] = true;
    B.push(start);

//    cost[start]=0;
    while(!B.empty())
    {
        int n = B.front();
        B.pop();
      //  cout << n << endl;

        printf("%d(%d) ",n,cost[n]);
        for(int i=0;i<A[n].size();i++)
        {
            int x = A[n][i];
            if(!visited[x])
            {
                B.push(x);
                visited[x] = true;
                cost[x]=cost[n]+1;
            }
        }
    }
}
int main()
{
    Input();
    int start;
   // cout << "Enter the value of starting point : ";
    cin >> start;
    cout << endl;
    bfs(start);
}
