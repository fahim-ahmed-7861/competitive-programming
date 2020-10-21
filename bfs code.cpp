#include<bits/stdc++.h>
using namespace std;
vector<int>nodes[100];
vector<int>:: iterator it;
int visited[100],cost[100];
stack<int>s;
void dfs(int s)
{
    if(visited[s]==1)
    {
        //printf("%d ",src);
        return;
    }
    visited[s]=1;
    for(it=nodes[s].begin();it!=nodes[s].end();it++)
    {
        dfs(*it);

    }
    printf("%d ",s);
}
int main()
{
    int i,j,n,edge,source=2,u,v;

    scanf("%d %d",&n,&edge);

    for(i=0;i<edge;i++)
    {
        scanf("%d %d",&u,&v);
        nodes[u].push_back(v);
        nodes[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d-->",i);
        for(j=0;j<nodes[i].size();j++)
        {
            printf("%d ",nodes[i][j]);
        }
        printf("\n");
    }
   // dfs(source);
    return 0;
}
