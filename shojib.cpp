#include<bits\stdc++.h>
using namespace std;
int a[50][50],n,i,j,col[50];
int dist[100];
void dfs(int node)
{
    col[node]=1;
    for(i=1; i<=n; i++)
    {
        if(a[node][i]==1&&col[i]==0)
        {
            dist[i]=dist[node]+1;
            dfs(i);
        }
    }
    return;
}
int main()
{
    int i,j,node,m,one,two;
    scanf("%d%d",&n,&m);
    for(i=1; i<=m; i++)
    {
        cin>>one>>two;
        a[one][two]=1;

    }
    memset(col,0,sizeof(col));
//   for(i=1; i<=n; i++)
    //  {
    //      if(col[i]==0)
    dist[1]=0;
    dfs(1);
//   }
    for(int i=1; i<=n; i++)
        cout<<dist[i]<<" ";
    return 0;
}
